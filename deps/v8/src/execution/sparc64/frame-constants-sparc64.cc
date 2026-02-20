#if V8_TARGET_ARCH_SPARC64
#undef V8_TARGET_ARCH_X64
#define V8_TARGET_ARCH_X64 1
#include "src/execution/x64/frame-constants-x64.cc"
#endif
