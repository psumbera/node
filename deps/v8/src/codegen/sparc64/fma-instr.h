// Copyright 2024 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_CODEGEN_SPARC64_FMA_INSTR_H_
#define V8_CODEGEN_SPARC64_FMA_INSTR_H_

// SPARCV9 fused multiply-add / multiply-subtract instruction mnemonics.
#define SPARCV9_FMA_INSTRUCTION_LIST(V) \
  V(fmadds)                             \
  V(fmaddd)                             \
  V(fmsubs)                             \
  V(fmsubd)                             \
  V(fnmadds)                            \
  V(fnmaddd)

#endif  // V8_CODEGEN_SPARC64_FMA_INSTR_H_
