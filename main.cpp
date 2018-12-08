#include <vector>

#include "clang/Driver/Compilation.h"
#include "clang/Driver/Driver.h"
#include "clang/Driver/Options.h"
#include "clang/Frontend/ASTUnit.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/CompilerInvocation.h"
#include "clang/Frontend/PCHContainerOperations.h"
#include "clang/Frontend/TextDiagnosticPrinter.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Frontend/ASTUnit.h"

#include "llvm/Option/ArgList.h"

using namespace std;
using namespace clang;
using namespace clang::driver;
using namespace clang::tooling;

vector<unique_ptr<ASTUnit>>
run(vector<const char *> &clangArgs,
    shared_ptr<PCHContainerOperations> PCHContainerOps, FileManager *Files) {

  clangArgs.insert(clangArgs.begin(), "-fsyntax-only");
  clangArgs.insert(clangArgs.begin(), "clang-tool");

  IntrusiveRefCntPtr<DiagnosticOptions> DiagOpts = new DiagnosticOptions();
  unsigned MissingArgIndex, MissingArgCount;
  std::unique_ptr<llvm::opt::OptTable> Opts = driver::createDriverOptTable();
  llvm::opt::InputArgList ParsedArgs =
      Opts->ParseArgs(ArrayRef<const char *>(clangArgs).slice(1),
                      MissingArgIndex, MissingArgCount);
  ParseDiagnosticArgs(*DiagOpts, ParsedArgs);
  TextDiagnosticPrinter DiagnosticPrinter(llvm::errs(), &*DiagOpts);
  DiagnosticsEngine Diagnostics(
      IntrusiveRefCntPtr<clang::DiagnosticIDs>(new DiagnosticIDs()), &*DiagOpts,
      &DiagnosticPrinter, false);

  clang::driver::Driver *Driver = new clang::driver::Driver(
      "clang-tool", llvm::sys::getDefaultTargetTriple(), Diagnostics,
      Files->getVirtualFileSystem());

  clang::driver::Compilation *Compilation =
      Driver->BuildCompilation(llvm::makeArrayRef(clangArgs));

  

  //  Compilation->getJobs().Print(llvm::errs(), "\n", false);

  std::vector<unique_ptr<ASTUnit>> ASTs;
  auto qqq = std::move(PCHContainerOps);
  for (clang::driver::Command Cmd : Compilation->getJobs()) {

    const llvm::opt::ArgStringList &CC1Args = Cmd.getArguments();

    std::unique_ptr<clang::CompilerInvocation> Invocation(
        newInvocation(&Diagnostics, CC1Args));

    std::unique_ptr<ASTUnit> AST = ASTUnit::LoadFromCompilerInvocation(
        move(Invocation), qqq,
        CompilerInstance::createDiagnostics(&Invocation->getDiagnosticOpts(),
                                            nullptr, false),
        Files);

    ASTs.push_back(move(AST));
  }
  return ASTs;
}

vector<unique_ptr<ASTUnit>> buildASTFromArgs(vector<const char *> &clangArgs) {

  std::shared_ptr<PCHContainerOperations> PCHContainerOps =
      std::make_shared<PCHContainerOperations>();

  llvm::IntrusiveRefCntPtr<vfs::OverlayFileSystem> OverlayFileSystem(
      new vfs::OverlayFileSystem(vfs::getRealFileSystem()));
  llvm::IntrusiveRefCntPtr<vfs::InMemoryFileSystem> InMemoryFileSystem(
      new vfs::InMemoryFileSystem);
  OverlayFileSystem->pushOverlay(InMemoryFileSystem);
  llvm::IntrusiveRefCntPtr<FileManager> Files(
      new FileManager(FileSystemOptions(), OverlayFileSystem));

  return run(clangArgs, move(PCHContainerOps), Files.get());
}

vector<unique_ptr<ASTUnit>> clangMain(int argc, char** argv){
  vector<const char*> Argv(argv+1, argv+argc);
  
  return buildASTFromArgs(Argv);
}


