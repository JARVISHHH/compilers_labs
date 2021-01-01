# your asm code header here

# define your veriables and temp veriables here
	.bss
_a0:
	.zero	4
	.align	4
_b0:
	.zero	4
	.align	4


# your asm code here
	.text
	.globl _start
_start:
	movl $_a0, %eax
	addl $_b0, %eax
	movl %eax, $t0
	movl $t0, %eax
	addl $1, %eax
	movl %eax, $t0
	movl $t0, _a0
	movl $2, %eax
	xor $2, %eax
	movl %eax, $t0
	movl $t0, %eax
	cmpl $3, %eax
	jl @0
	movl $_a1, %eax
	addl $2, %eax
	movl %eax, $t0
	movl $t0, _a1
	movl $_a1, %eax
	addl $3, %eax
	movl %eax, $t0
	movl $t0, _a1
@0:
	ret
