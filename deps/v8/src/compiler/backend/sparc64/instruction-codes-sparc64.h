// Copyright 2014 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_COMPILER_BACKEND_SPARC64_INSTRUCTION_CODES_SPARC64_H_
#define V8_COMPILER_BACKEND_SPARC64_INSTRUCTION_CODES_SPARC64_H_

namespace v8 {
namespace internal {
namespace compiler {

// Sparc64-specific opcode list used by the staged backend.
// Opcode naming currently mirrors x64 while sparc64 codegen is being ported.

// Opcodes that support a MemoryAccessMode.
#define TARGET_ARCH_OPCODE_WITH_MEMORY_ACCESS_MODE_LIST(V) \
  V(Sparc64F64x2PromoteLowF32x4)                               \
  V(Sparc64Movb)                                               \
  V(Sparc64Movdqu)                                             \
  V(Sparc64Movl)                                               \
  V(Sparc64Movq)                                               \
  V(Sparc64Movsd)                                              \
  V(Sparc64Movss)                                              \
  V(Sparc64Movsh)                                              \
  V(Sparc64Movsxbl)                                            \
  V(Sparc64Movsxbq)                                            \
  V(Sparc64Movsxlq)                                            \
  V(Sparc64Movsxwl)                                            \
  V(Sparc64Movsxwq)                                            \
  V(Sparc64Movw)                                               \
  V(Sparc64Movzxbl)                                            \
  V(Sparc64Movzxbq)                                            \
  V(Sparc64Movzxwl)                                            \
  V(Sparc64Movzxwq)                                            \
  V(Sparc64Pextrb)                                             \
  V(Sparc64Pextrw)                                             \
  V(Sparc64Pinsrb)                                             \
  V(Sparc64Pinsrd)                                             \
  V(Sparc64Pinsrq)                                             \
  V(Sparc64Pinsrw)                                             \
  V(Sparc64S128Load16Splat)                                    \
  V(Sparc64S128Load16x4S)                                      \
  V(Sparc64S128Load16x4U)                                      \
  V(Sparc64S128Load32Splat)                                    \
  V(Sparc64S128Load32x2S)                                      \
  V(Sparc64S128Load32x2U)                                      \
  V(Sparc64S128Load64Splat)                                    \
  V(Sparc64S128Load8Splat)                                     \
  V(Sparc64S128Load8x8S)                                       \
  V(Sparc64S128Load8x8U)                                       \
  V(Sparc64S128Store32Lane)                                    \
  V(Sparc64S128Store64Lane)                                    \
  V(Sparc64Word64AtomicStoreWord64)                            \
  V(Sparc64Word64AtomicAddUint64)                              \
  V(Sparc64Word64AtomicSubUint64)                              \
  V(Sparc64Word64AtomicAndUint64)                              \
  V(Sparc64Word64AtomicOrUint64)                               \
  V(Sparc64Word64AtomicXorUint64)                              \
  V(Sparc64Word64AtomicExchangeUint64)                         \
  V(Sparc64Word64AtomicCompareExchangeUint64)                  \
  V(Sparc64Movdqu256)                                          \
  V(Sparc64MovqDecompressTaggedSigned)                         \
  V(Sparc64MovqDecompressTagged)                               \
  V(Sparc64MovqCompressTagged)                                 \
  V(Sparc64MovqDecompressProtected)                            \
  V(Sparc64S256Load8Splat)                                     \
  V(Sparc64S256Load16Splat)                                    \
  V(Sparc64S256Load32Splat)                                    \
  V(Sparc64S256Load64Splat)                                    \
  V(Sparc64S256Load8x16S)                                      \
  V(Sparc64S256Load8x16U)                                      \
  V(Sparc64S256Load8x8U)                                       \
  V(Sparc64S256Load16x8S)                                      \
  V(Sparc64S256Load16x8U)                                      \
  V(Sparc64S256Load32x4S)                                      \
  V(Sparc64S256Load32x4U)                                      \
  V(SSEFloat32Add)                                         \
  V(SSEFloat32Sub)                                         \
  V(SSEFloat32Mul)                                         \
  V(SSEFloat32Div)                                         \
  V(SSEFloat64Add)                                         \
  V(SSEFloat64Sub)                                         \
  V(SSEFloat64Mul)                                         \
  V(SSEFloat64Div)                                         \
  V(AVXFloat32Add)                                         \
  V(AVXFloat32Sub)                                         \
  V(AVXFloat32Mul)                                         \
  V(AVXFloat32Div)                                         \
  V(AVXFloat64Add)                                         \
  V(AVXFloat64Sub)                                         \
  V(AVXFloat64Mul)                                         \
  V(AVXFloat64Div)

#define TARGET_ARCH_OPCODE_LIST(V)                   \
  TARGET_ARCH_OPCODE_WITH_MEMORY_ACCESS_MODE_LIST(V) \
  V(Sparc64Add)                                          \
  V(Sparc64Add32)                                        \
  V(Sparc64And)                                          \
  V(Sparc64And32)                                        \
  V(Sparc64Cmp)                                          \
  V(Sparc64Cmp32)                                        \
  V(Sparc64Cmp16)                                        \
  V(Sparc64Cmp8)                                         \
  V(Sparc64Test)                                         \
  V(Sparc64Test32)                                       \
  V(Sparc64Test16)                                       \
  V(Sparc64Test8)                                        \
  V(Sparc64Or)                                           \
  V(Sparc64Or32)                                         \
  V(Sparc64Xor)                                          \
  V(Sparc64Xor32)                                        \
  V(Sparc64Sub)                                          \
  V(Sparc64Sub32)                                        \
  V(Sparc64Imul)                                         \
  V(Sparc64Imul32)                                       \
  V(Sparc64ImulHigh32)                                   \
  V(Sparc64ImulHigh64)                                   \
  V(Sparc64UmulHigh32)                                   \
  V(Sparc64UmulHigh64)                                   \
  V(Sparc64Idiv)                                         \
  V(Sparc64Idiv32)                                       \
  V(Sparc64Udiv)                                         \
  V(Sparc64Udiv32)                                       \
  V(Sparc64Not)                                          \
  V(Sparc64Not32)                                        \
  V(Sparc64Neg)                                          \
  V(Sparc64Neg32)                                        \
  V(Sparc64Shl)                                          \
  V(Sparc64Shl32)                                        \
  V(Sparc64Shr)                                          \
  V(Sparc64Shr32)                                        \
  V(Sparc64Sar)                                          \
  V(Sparc64Sar32)                                        \
  V(Sparc64Rol)                                          \
  V(Sparc64Rol32)                                        \
  V(Sparc64Ror)                                          \
  V(Sparc64Ror32)                                        \
  V(Sparc64Lzcnt)                                        \
  V(Sparc64Lzcnt32)                                      \
  V(Sparc64Tzcnt)                                        \
  V(Sparc64Tzcnt32)                                      \
  V(Sparc64Popcnt)                                       \
  V(Sparc64Popcnt32)                                     \
  V(Sparc64Bswap)                                        \
  V(Sparc64Bswap32)                                      \
  V(Sparc64MFence)                                       \
  V(Sparc64LFence)                                       \
  V(SSEFloat32Cmp)                                   \
  V(SSEFloat32Sqrt)                                  \
  V(SSEFloat32ToFloat64)                             \
  V(SSEFloat32ToInt32)                               \
  V(SSEFloat32ToUint32)                              \
  V(SSEFloat32Round)                                 \
  V(SSEFloat64Cmp)                                   \
  V(SSEFloat64Mod)                                   \
  V(SSEFloat64Sqrt)                                  \
  V(SSEFloat64Round)                                 \
  V(SSEFloat32Max)                                   \
  V(SSEFloat64Max)                                   \
  V(SSEFloat32Min)                                   \
  V(SSEFloat64Min)                                   \
  V(SSEFloat64ToFloat32)                             \
  V(SSEFloat64ToFloat16RawBits)                      \
  V(SSEFloat16RawBitsToFloat64)                      \
  V(SSEFloat64ToInt32)                               \
  V(SSEFloat64ToUint32)                              \
  V(SSEFloat32ToInt64)                               \
  V(SSEFloat64ToInt64)                               \
  V(SSEFloat32ToUint64)                              \
  V(SSEFloat64ToUint64)                              \
  V(SSEInt32ToFloat64)                               \
  V(SSEInt32ToFloat32)                               \
  V(SSEInt64ToFloat32)                               \
  V(SSEInt64ToFloat64)                               \
  V(SSEUint64ToFloat32)                              \
  V(SSEUint64ToFloat64)                              \
  V(SSEUint32ToFloat64)                              \
  V(SSEUint32ToFloat32)                              \
  V(SSEFloat64ExtractLowWord32)                      \
  V(SSEFloat64ExtractHighWord32)                     \
  V(SSEFloat64InsertLowWord32)                       \
  V(SSEFloat64InsertHighWord32)                      \
  V(SSEFloat64LoadLowWord32)                         \
  V(SSEFloat64SilenceNaN)                            \
  V(AVXFloat32Cmp)                                   \
  V(AVXFloat64Cmp)                                   \
  V(Sparc64Float64Abs)                                   \
  V(Sparc64Float64Neg)                                   \
  V(Sparc64Float32Abs)                                   \
  V(Sparc64Float32Neg)                                   \
  V(Sparc64MovqStoreIndirectPointer)                     \
  V(Sparc64MovqEncodeSandboxedPointer)                   \
  V(Sparc64MovqDecodeSandboxedPointer)                   \
  V(Sparc64BitcastFI)                                    \
  V(Sparc64BitcastDL)                                    \
  V(Sparc64BitcastIF)                                    \
  V(Sparc64BitcastLD)                                    \
  V(Sparc64Lea32)                                        \
  V(Sparc64Lea)                                          \
  V(Sparc64Dec32)                                        \
  V(Sparc64Inc32)                                        \
  V(Sparc64Push)                                         \
  V(Sparc64Poke)                                         \
  V(Sparc64Peek)                                         \
  V(Sparc64Cvttps2dq)                                    \
  V(Sparc64Cvttpd2dq)                                    \
  V(Sparc64I32x4TruncF64x2UZero)                         \
  V(Sparc64I32x4TruncF32x4U)                             \
  V(Sparc64I32x8TruncF32x8U)                             \
  V(Sparc64FSplat)                                       \
  V(Sparc64FExtractLane)                                 \
  V(Sparc64FReplaceLane)                                 \
  V(Sparc64FAbs)                                         \
  V(Sparc64FNeg)                                         \
  V(Sparc64FSqrt)                                        \
  V(Sparc64FAdd)                                         \
  V(Sparc64FSub)                                         \
  V(Sparc64FMul)                                         \
  V(Sparc64FDiv)                                         \
  V(Sparc64FMin)                                         \
  V(Sparc64FMax)                                         \
  V(Sparc64FEq)                                          \
  V(Sparc64FNe)                                          \
  V(Sparc64FLt)                                          \
  V(Sparc64FLe)                                          \
  V(Sparc64F64x2Qfma)                                    \
  V(Sparc64F64x2Qfms)                                    \
  V(Sparc64Minpd)                                        \
  V(Sparc64Maxpd)                                        \
  V(Sparc64F64x2Round)                                   \
  V(Sparc64F64x2ConvertLowI32x4S)                        \
  V(Sparc64F64x4ConvertI32x4S)                           \
  V(Sparc64F64x2ConvertLowI32x4U)                        \
  V(Sparc64F32x4SConvertI32x4)                           \
  V(Sparc64F32x8SConvertI32x8)                           \
  V(Sparc64F32x4UConvertI32x4)                           \
  V(Sparc64F32x8UConvertI32x8)                           \
  V(Sparc64F32x4Qfma)                                    \
  V(Sparc64F32x4Qfms)                                    \
  V(Sparc64Minps)                                        \
  V(Sparc64Maxps)                                        \
  V(Sparc64F32x4Round)                                   \
  V(Sparc64F32x4DemoteF64x2Zero)                         \
  V(Sparc64F32x4DemoteF64x4)                             \
  V(Sparc64F16x8Round)                                   \
  V(Sparc64I16x8SConvertF16x8)                           \
  V(Sparc64I16x8UConvertF16x8)                           \
  V(Sparc64F16x8SConvertI16x8)                           \
  V(Sparc64F16x8UConvertI16x8)                           \
  V(Sparc64F16x8DemoteF32x4Zero)                         \
  V(Sparc64F16x8DemoteF64x2Zero)                         \
  V(Sparc64F32x4PromoteLowF16x8)                         \
  V(Sparc64F16x8Qfma)                                    \
  V(Sparc64F16x8Qfms)                                    \
  V(Sparc64Minph)                                        \
  V(Sparc64Maxph)                                        \
  V(Sparc64ISplat)                                       \
  V(Sparc64IExtractLane)                                 \
  V(Sparc64IAbs)                                         \
  V(Sparc64INeg)                                         \
  V(Sparc64IBitMask)                                     \
  V(Sparc64IShl)                                         \
  V(Sparc64IShrS)                                        \
  V(Sparc64IAdd)                                         \
  V(Sparc64ISub)                                         \
  V(Sparc64IMul)                                         \
  V(Sparc64IEq)                                          \
  V(Sparc64IGtS)                                         \
  V(Sparc64IGeS)                                         \
  V(Sparc64INe)                                          \
  V(Sparc64IShrU)                                        \
  V(Sparc64I64x2ExtMulLowI32x4S)                         \
  V(Sparc64I64x2ExtMulHighI32x4S)                        \
  V(Sparc64I64x2ExtMulLowI32x4U)                         \
  V(Sparc64I64x2ExtMulHighI32x4U)                        \
  V(Sparc64I64x2SConvertI32x4Low)                        \
  V(Sparc64I64x2SConvertI32x4High)                       \
  V(Sparc64I64x4SConvertI32x4)                           \
  V(Sparc64I64x2UConvertI32x4Low)                        \
  V(Sparc64I64x2UConvertI32x4High)                       \
  V(Sparc64I64x4UConvertI32x4)                           \
  V(Sparc64I32x4SConvertF32x4)                           \
  V(Sparc64I32x8SConvertF32x8)                           \
  V(Sparc64I32x4SConvertI16x8Low)                        \
  V(Sparc64I32x4SConvertI16x8High)                       \
  V(Sparc64I32x8SConvertI16x8)                           \
  V(Sparc64IMinS)                                        \
  V(Sparc64IMaxS)                                        \
  V(Sparc64I32x4UConvertF32x4)                           \
  V(Sparc64I32x8UConvertF32x8)                           \
  V(Sparc64I32x4UConvertI16x8Low)                        \
  V(Sparc64I32x4UConvertI16x8High)                       \
  V(Sparc64I32x8UConvertI16x8)                           \
  V(Sparc64IMinU)                                        \
  V(Sparc64IMaxU)                                        \
  V(Sparc64IGtU)                                         \
  V(Sparc64IGeU)                                         \
  V(Sparc64I32x4DotI16x8S)                               \
  V(Sparc64I32x8DotI16x16S)                              \
  V(Sparc64I32x4DotI8x16I7x16AddS)                       \
  V(Sparc64I32x4ExtMulLowI16x8S)                         \
  V(Sparc64I32x4ExtMulHighI16x8S)                        \
  V(Sparc64I32x4ExtMulLowI16x8U)                         \
  V(Sparc64I32x4ExtMulHighI16x8U)                        \
  V(Sparc64I32x4ExtAddPairwiseI16x8S)                    \
  V(Sparc64I32x8ExtAddPairwiseI16x16S)                   \
  V(Sparc64I32x4ExtAddPairwiseI16x8U)                    \
  V(Sparc64I32x8ExtAddPairwiseI16x16U)                   \
  V(Sparc64I32x4TruncSatF64x2SZero)                      \
  V(Sparc64I32x4TruncSatF64x2UZero)                      \
  V(Sparc64I32X4ShiftZeroExtendI8x16)                    \
  V(Sparc64IExtractLaneS)                                \
  V(Sparc64I16x8SConvertI8x16Low)                        \
  V(Sparc64I16x8SConvertI8x16High)                       \
  V(Sparc64I16x16SConvertI8x16)                          \
  V(Sparc64I16x8SConvertI32x4)                           \
  V(Sparc64I16x16SConvertI32x8)                          \
  V(Sparc64IAddSatS)                                     \
  V(Sparc64ISubSatS)                                     \
  V(Sparc64I16x8UConvertI8x16Low)                        \
  V(Sparc64I16x8UConvertI8x16High)                       \
  V(Sparc64I16x16UConvertI8x16)                          \
  V(Sparc64I16x8UConvertI32x4)                           \
  V(Sparc64I16x16UConvertI32x8)                          \
  V(Sparc64IAddSatU)                                     \
  V(Sparc64ISubSatU)                                     \
  V(Sparc64IRoundingAverageU)                            \
  V(Sparc64I16x8ExtMulLowI8x16S)                         \
  V(Sparc64I16x8ExtMulHighI8x16S)                        \
  V(Sparc64I16x8ExtMulLowI8x16U)                         \
  V(Sparc64I16x8ExtMulHighI8x16U)                        \
  V(Sparc64I16x8ExtAddPairwiseI8x16S)                    \
  V(Sparc64I16x16ExtAddPairwiseI8x32S)                   \
  V(Sparc64I16x8ExtAddPairwiseI8x16U)                    \
  V(Sparc64I16x16ExtAddPairwiseI8x32U)                   \
  V(Sparc64I16x8Q15MulRSatS)                             \
  V(Sparc64I16x8RelaxedQ15MulRS)                         \
  V(Sparc64I16x8DotI8x16I7x16S)                          \
  V(Sparc64I8x16SConvertI16x8)                           \
  V(Sparc64I8x32SConvertI16x16)                          \
  V(Sparc64I8x16UConvertI16x8)                           \
  V(Sparc64I8x32UConvertI16x16)                          \
  V(Sparc64S128Const)                                    \
  V(Sparc64S256Const)                                    \
  V(Sparc64SZero)                                        \
  V(Sparc64SAllOnes)                                     \
  V(Sparc64SNot)                                         \
  V(Sparc64SAnd)                                         \
  V(Sparc64SOr)                                          \
  V(Sparc64SXor)                                         \
  V(Sparc64SSelect)                                      \
  V(Sparc64SAndNot)                                      \
  V(Sparc64I8x16Swizzle)                                 \
  V(Sparc64I8x16Shuffle)                                 \
  V(Sparc64Vpshufd)                                      \
  V(Sparc64I8x16Popcnt)                                  \
  V(Sparc64Shufps)                                       \
  V(Sparc64S32x4Rotate)                                  \
  V(Sparc64S32x4Swizzle)                                 \
  V(Sparc64S32x4Shuffle)                                 \
  V(Sparc64S16x8Blend)                                   \
  V(Sparc64S16x8HalfShuffle1)                            \
  V(Sparc64S16x8HalfShuffle2)                            \
  V(Sparc64S8x16Alignr)                                  \
  V(Sparc64S16x8Dup)                                     \
  V(Sparc64S8x16Dup)                                     \
  V(Sparc64S16x8UnzipHigh)                               \
  V(Sparc64S16x8UnzipLow)                                \
  V(Sparc64S8x16UnzipHigh)                               \
  V(Sparc64S8x16UnzipLow)                                \
  V(Sparc64S64x2UnpackHigh)                              \
  V(Sparc64S32x4UnpackHigh)                              \
  V(Sparc64S16x8UnpackHigh)                              \
  V(Sparc64S8x16UnpackHigh)                              \
  V(Sparc64S32x8UnpackHigh)                              \
  V(Sparc64S64x2UnpackLow)                               \
  V(Sparc64S32x4UnpackLow)                               \
  V(Sparc64S16x8UnpackLow)                               \
  V(Sparc64S8x16UnpackLow)                               \
  V(Sparc64S32x8UnpackLow)                               \
  V(Sparc64S8x16TransposeLow)                            \
  V(Sparc64S8x16TransposeHigh)                           \
  V(Sparc64S8x8Reverse)                                  \
  V(Sparc64S8x4Reverse)                                  \
  V(Sparc64S8x2Reverse)                                  \
  V(Sparc64V128AnyTrue)                                  \
  V(Sparc64IAllTrue)                                     \
  V(Sparc64Blendvpd)                                     \
  V(Sparc64Blendvps)                                     \
  V(Sparc64Pblendvb)                                     \
  V(Sparc64I64x4ExtMulI32x4S)                            \
  V(Sparc64I64x4ExtMulI32x4U)                            \
  V(Sparc64I32x8ExtMulI16x8S)                            \
  V(Sparc64I32x8ExtMulI16x8U)                            \
  V(Sparc64I16x16ExtMulI8x16S)                           \
  V(Sparc64I16x16ExtMulI8x16U)                           \
  V(Sparc64TraceInstruction)                             \
  V(Sparc64F32x8Pmin)                                    \
  V(Sparc64F32x8Pmax)                                    \
  V(Sparc64F64x4Pmin)                                    \
  V(Sparc64F64x4Pmax)                                    \
  V(Sparc64ExtractF128)                                  \
  V(Sparc64F32x8Qfma)                                    \
  V(Sparc64F32x8Qfms)                                    \
  V(Sparc64F64x4Qfma)                                    \
  V(Sparc64F64x4Qfms)                                    \
  V(Sparc64InsertI128)                                   \
  V(Sparc64I32x8DotI8x32I7x32AddS)                       \
  V(Sparc64I16x16DotI8x32I7x32S)

// Addressing modes represent the "shape" of inputs to an instruction.
// Many instructions support multiple addressing modes. Addressing modes
// are encoded into the InstructionCode of the instruction and tell the
// code generator after register allocation which assembler method to call.
//
// We use the following local notation for addressing modes:
//
// M = memory operand
// R = base register
// N = index register * N for N in {1, 2, 4, 8}
// I = immediate displacement (32-bit signed integer)

#define TARGET_ADDRESSING_MODE_LIST(V)   \
  V(MR)   /* [%r1            ] */        \
  V(MRI)  /* [%r1         + K] */        \
  V(MR1)  /* [%r1 + %r2*1    ] */        \
  V(MR2)  /* [%r1 + %r2*2    ] */        \
  V(MR4)  /* [%r1 + %r2*4    ] */        \
  V(MR8)  /* [%r1 + %r2*8    ] */        \
  V(MR1I) /* [%r1 + %r2*1 + K] */        \
  V(MR2I) /* [%r1 + %r2*2 + K] */        \
  V(MR4I) /* [%r1 + %r2*4 + K] */        \
  V(MR8I) /* [%r1 + %r2*8 + K] */        \
  V(M1)   /* [      %r2*1    ] */        \
  V(M2)   /* [      %r2*2    ] */        \
  V(M4)   /* [      %r2*4    ] */        \
  V(M8)   /* [      %r2*8    ] */        \
  V(M1I)  /* [      %r2*1 + K] */        \
  V(M2I)  /* [      %r2*2 + K] */        \
  V(M4I)  /* [      %r2*4 + K] */        \
  V(M8I)  /* [      %r2*8 + K] */        \
  V(Root) /* [%root       + K] */        \
  V(MCR)  /* [%compressed_base + %r1] */ \
  V(MCRI) /* [%compressed_base + %r1 + K] */

}  // namespace compiler
}  // namespace internal
}  // namespace v8

#endif  // V8_COMPILER_BACKEND_SPARC64_INSTRUCTION_CODES_SPARC64_H_
