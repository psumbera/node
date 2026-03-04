// Copyright 2024 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// SPARC64 fallback implementation for conservative stack scanning.
//
// This keeps the SPARC64 target self-contained (without reusing x64 assembly
// sources) and provides the architecture-specific symbol expected by
// src/heap/base/stack.cc.

#include "src/heap/base/stack.h"

namespace heap::base {

extern "C" void PushAllRegistersAndIterateStack(
    Stack* stack, void* argument, Stack::IterateStackCallback callback) {
  // The frame address is used as the conservative marker for stack scanning.
  // This follows the same callback contract as other architecture-specific
  // implementations.
  callback(stack, argument, __builtin_frame_address(0));
}

}  // namespace heap::base
