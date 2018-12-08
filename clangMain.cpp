#include "clang/Tooling/CompilationDatabase.h"
#include "clang/Tooling/Tooling.h"
#include "clang/Driver/Options.h"

#include "llvm/Option/Arg.h"
#include "llvm/Option/ArgList.h"
#include "llvm/Option/OptTable.h"
#include "llvm/Option/Option.h"

#include <string>
#include <vector>

using namespace clang;
using namespace tooling;
using namespace std; 
using namespace llvm;
using namespace opt;

void parseArgs(int argc, char** argv, vector<string> &Args, vector<string> &Inputs){
  unique_ptr<OptTable> clangOpts = clang::driver::createDriverOptTable();
  unsigned MissingArgIndex, MissingArgCount;

  InputArgList clangArgs = clangOpts->ParseArgs(makeArrayRef(argv + 1, argc - 1),
                                      MissingArgIndex, MissingArgCount);

  for (const Arg *A : clangArgs) {
    if(A->getOption().matches(clang::driver::options::OPT_INPUT))
      Inputs.push_back(A->getValue());
    else{
      ArgStringList ASL;
      A->render(clangArgs, ASL);
      for(auto it : ASL)
        Args.push_back(it);
    }
  }
}

int clangMain(int argc, char** argv, vector<unique_ptr<ASTUnit>> &ASTs){
  vector<string> Args, Inputs;
  parseArgs(argc, argv, Args, Inputs);
  
  FixedCompilationDatabase Compilations(".", Args);

  
  ClangTool Tool(Compilations, Inputs);

  return Tool.buildASTs(ASTs);
}
