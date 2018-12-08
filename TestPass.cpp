#include <string>
#include <iostream>

#include "llvm/ADT/Statistic.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/Function.h"
#include "llvm/Analysis/CallGraph.h"
#include "llvm/Bitcode/BitcodeWriter.h"
#include "llvm/Support/Format.h"

using namespace llvm;
using namespace std;

#define DEBUG_TYPE "Test"

string getMD5(StringRef input) {

  MD5::MD5Result Result;
  MD5 H;
  H.update(input);
  H.final(Result);

  SmallString<32> output;

  MD5::stringifyResult(Result, output);

  string ret = output.str();

  return ret;
}

struct TestPass : public llvm::ModulePass {
  static char ID; // Pass identification, replacement for typeid
  TestPass() : ModulePass(ID) {}
  bool runOnModule(llvm::Module &M) override;
};

bool TestPass::runOnModule(Module &M) {

 
  string bc;
  raw_string_ostream OS(bc);
  WriteBitcodeToFile(&M, OS, false);
  OS.flush();

  llvm::outs() << getMD5(bc) << "\n";
  llvm::outs() << bc.length() << "\n";

  for(unsigned char c : bc)
    llvm::outs() << format("%.2x", c);

  llvm::outs() << "\n";

   return true;
}


char TestPass::ID = 0;

static RegisterPass<TestPass> X("test", "Test");

