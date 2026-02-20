#if V8_TARGET_ARCH_SPARC64
#undef V8_TARGET_ARCH_X64
#define V8_TARGET_ARCH_X64 1
#include "src/compiler/backend/x64/unwinding-info-writer-x64.cc"
#endif
