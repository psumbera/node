// Copyright 2012 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/regexp/sparc64/regexp-macro-assembler-sparc64.h"

namespace v8 {
namespace internal {

int RegExpMacroAssemblerSPARC64::CheckStackGuardState(
    Address* return_address, Address raw_code, Address re_frame,
    uintptr_t extra_space) {
  return NativeRegExpMacroAssembler::CheckStackGuardState(
      return_address, raw_code, re_frame, extra_space);
}

}  // namespace internal
}  // namespace v8
