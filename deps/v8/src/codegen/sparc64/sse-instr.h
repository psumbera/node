// Copyright 2024 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_CODEGEN_SPARC64_SSE_INSTR_H_
#define V8_CODEGEN_SPARC64_SSE_INSTR_H_

// SPARCV9 does not implement x86 SSE/SSE2/SSE3 instructions.
// This header provides SPARC VIS instruction families used by the
// SPARC64 backend.

// VIS integer/vector logical and arithmetic operations.
#define SPARCV9_VIS_LOGICAL_INSTRUCTION_LIST(V) \
  V(fand)                                        \
  V(fandnot1)                                    \
  V(fandnot2)                                    \
  V(for)                                         \
  V(fxor)                                        \
  V(fxnor)

#define SPARCV9_VIS_ARITH_INSTRUCTION_LIST(V) \
  V(fpadd16)                                   \
  V(fpadd16s)                                  \
  V(fpadd32)                                   \
  V(fpsub16)                                   \
  V(fpsub16s)                                  \
  V(fpsub32)

#define SPARCV9_VIS_PACK_INSTRUCTION_LIST(V) \
  V(fpack16)                                  \
  V(fpack32)                                  \
  V(fpackfix)

// Backward-compatible alias used by existing include sites during porting.
#define SPARCV9_SIMD_INSTRUCTION_LIST(V)      \
  SPARCV9_VIS_LOGICAL_INSTRUCTION_LIST(V)     \
  SPARCV9_VIS_ARITH_INSTRUCTION_LIST(V)       \
  SPARCV9_VIS_PACK_INSTRUCTION_LIST(V)

#endif  // V8_CODEGEN_SPARC64_SSE_INSTR_H_
