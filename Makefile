SOURCES = main1.cpp

OBJECTS = $(SOURCES:.cpp=.o)
SHARES  = $(SOURCES:.cpp=.so)
TARGET  = main
LIBPATH = `$(LLVM_CONFIG) --libdir`
LLVM_CONFIG = ~/Pictures/build/bin/llvm-config
CXX = g++
CCACHE = ccache
 
 
llvm-goback: Makefile $(SHARES)
	$(CCACHE) $(CXX) -g -o $(TARGET) $(SHARES) \
    -L $(LIBPATH) -Wl,-rpath,$(shell pwd),-rpath,$(LIBPATH) \
    -lclangCodeGen -lclangTooling -lclangFrontend -lclangASTMatchers -lclangParse -lclangSerialization -lclangSema -lclangEdit \
    -lclangAnalysis -lclangDriver -lclangFormat -lclangToolingCore -lclangAST -lclangRewrite -lclangLex -lclangBasic \
    `$(LLVM_CONFIG) --libs --system-libs`
    
 
$(OBJECTS): %.o: %.cpp Makefile
	$(CCACHE) $(CXX) -g -c $< -o $@ `$(LLVM_CONFIG) --cxxflags`
    
$(SHARES): %.so: %.o Makefile
	$(CCACHE) $(CXX) -g -shared -fPIC $< -o $@
 
.PHONY: clean
clean:
	rm -rf $(TARGET) $(OBJECTS) $(SHARES)
