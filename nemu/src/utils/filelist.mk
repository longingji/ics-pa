ifdef CONFIG_ITRACE
CXXSRC = src/utils/disasm.cc
# CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
CXXFLAGS += $(shell llvm-config-11 --cxxflags) -fPIE
# LIBS += $(shell llvm-config --libs)
LIBS += $(shell llvm-config-11 --libs)
endif
