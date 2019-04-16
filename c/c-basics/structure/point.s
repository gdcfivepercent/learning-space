	.file	"point.c"
	.intel_syntax noprefix
# GNU C17 (Debian 8.3.0-6) version 8.3.0 (x86_64-linux-gnu)
#	compiled by GNU C version 8.3.0, GMP version 6.1.2, MPFR version 4.0.2, MPC version 1.1.0, isl version isl-0.20-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -imultiarch x86_64-linux-gnu point.c -masm=intel
# -mtune=generic -march=x86-64 -Wall -fverbose-asm
# options enabled:  -fPIC -fPIE -faggressive-loop-optimizations
# -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
# -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
# -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
# -fchkp-use-static-bounds -fchkp-use-static-const-bounds
# -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
# -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
# -ffp-int-builtin-inexact -ffunction-cse -fgcse-lm -fgnu-runtime
# -fgnu-unique -fident -finline-atomics -fira-hoist-pressure
# -fira-share-save-slots -fira-share-spill-slots -fivopts
# -fkeep-static-consts -fleading-underscore -flifetime-dse
# -flto-odr-type-merging -fmath-errno -fmerge-debug-strings -fpeephole
# -fplt -fprefetch-loop-arrays -freg-struct-return
# -fsched-critical-path-heuristic -fsched-dep-count-heuristic
# -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
# -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
# -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
# -fshow-column -fshrink-wrap-separate -fsigned-zeros
# -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
# -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math -ftree-cselim
# -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop
# -ftree-reassoc -ftree-scev-cprop -funit-at-a-time -funwind-tables
# -fverbose-asm -fzero-initialized-in-bss -m128bit-long-double -m64 -m80387
# -malign-stringops -mavx256-split-unaligned-load
# -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387 -mfxsr
# -mglibc -mieee-fp -mlong-double-80 -mmmx -mno-sse4 -mpush-args -mred-zone
# -msse -msse2 -mstv -mtls-direct-seg-refs -mvzeroupper

	.text
	.section	.rodata
.LC2:
	.string	"A is (%.2lf, %.2lf)\n"
	.align 8
.LC3:
	.string	"Distance between O and A is: %.2lf\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp	#,
	.cfi_def_cfa_register 6
	sub	rsp, 32	#,
# point.c:11:     struct point A = { 3, 4 };
	movsd	xmm0, QWORD PTR .LC0[rip]	# tmp109,
	movsd	QWORD PTR -32[rbp], xmm0	# A.x, tmp109
	movsd	xmm0, QWORD PTR .LC1[rip]	# tmp110,
	movsd	QWORD PTR -24[rbp], xmm0	# A.y, tmp110
# point.c:12:     struct point *p = &A;
	lea	rax, -32[rbp]	# tmp111,
	mov	QWORD PTR -8[rbp], rax	# p, tmp111
# point.c:14:     printf("A is (%.2lf, %.2lf)\n", A.x, A.y);
	movsd	xmm1, QWORD PTR -24[rbp]	# _1, A.y
	movsd	xmm0, QWORD PTR -32[rbp]	# _2, A.x
	lea	rdi, .LC2[rip]	#,
	mov	eax, 2	#,
	call	printf@PLT	#
# point.c:15:     printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));
	movsd	xmm1, QWORD PTR -32[rbp]	# _3, A.x
# point.c:15:     printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));
	movsd	xmm0, QWORD PTR -32[rbp]	# _4, A.x
# point.c:15:     printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));
	mulsd	xmm1, xmm0	# _5, _4
# point.c:15:     printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));
	movsd	xmm2, QWORD PTR -24[rbp]	# _6, A.y
# point.c:15:     printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));
	movsd	xmm0, QWORD PTR -24[rbp]	# _7, A.y
# point.c:15:     printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));
	mulsd	xmm0, xmm2	# _8, _6
# point.c:15:     printf("Distance between O and A is: %.2lf\n", sqrt(A.x * A.x + A.y * A.y));
	addsd	xmm0, xmm1	# _9, _5
	call	sqrt@PLT	#
	lea	rdi, .LC3[rip]	#,
	mov	eax, 1	#,
	call	printf@PLT	#
# point.c:17:     printf("A is (%.2lf, %.2lf)\n", p->x, p->y);
	mov	rax, QWORD PTR -8[rbp]	# tmp112, p
	movsd	xmm1, QWORD PTR 8[rax]	# _11, p_24->y
	mov	rax, QWORD PTR -8[rbp]	# tmp113, p
	movsd	xmm0, QWORD PTR [rax]	# _12, p_24->x
	lea	rdi, .LC2[rip]	#,
	mov	eax, 2	#,
	call	printf@PLT	#
# point.c:18:     printf("Distance between O and A is: %.2lf\n", sqrt(p->x * p->x + p->y * p->y));
	mov	rax, QWORD PTR -8[rbp]	# tmp114, p
	movsd	xmm1, QWORD PTR [rax]	# _13, p_24->x
# point.c:18:     printf("Distance between O and A is: %.2lf\n", sqrt(p->x * p->x + p->y * p->y));
	mov	rax, QWORD PTR -8[rbp]	# tmp115, p
	movsd	xmm0, QWORD PTR [rax]	# _14, p_24->x
# point.c:18:     printf("Distance between O and A is: %.2lf\n", sqrt(p->x * p->x + p->y * p->y));
	mulsd	xmm1, xmm0	# _15, _14
# point.c:18:     printf("Distance between O and A is: %.2lf\n", sqrt(p->x * p->x + p->y * p->y));
	mov	rax, QWORD PTR -8[rbp]	# tmp116, p
	movsd	xmm2, QWORD PTR 8[rax]	# _16, p_24->y
# point.c:18:     printf("Distance between O and A is: %.2lf\n", sqrt(p->x * p->x + p->y * p->y));
	mov	rax, QWORD PTR -8[rbp]	# tmp117, p
	movsd	xmm0, QWORD PTR 8[rax]	# _17, p_24->y
# point.c:18:     printf("Distance between O and A is: %.2lf\n", sqrt(p->x * p->x + p->y * p->y));
	mulsd	xmm0, xmm2	# _18, _16
# point.c:18:     printf("Distance between O and A is: %.2lf\n", sqrt(p->x * p->x + p->y * p->y));
	addsd	xmm0, xmm1	# _19, _15
	call	sqrt@PLT	#
	lea	rdi, .LC3[rip]	#,
	mov	eax, 1	#,
	call	printf@PLT	#
# point.c:20:     return 0;
	mov	eax, 0	# _31,
# point.c:21: }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1074266112
	.align 8
.LC1:
	.long	0
	.long	1074790400
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
