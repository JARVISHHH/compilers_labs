# your asm code header here

# define your veriables and temp veriables here
	.bss
_a0:
	.zero	4
	.align	4
_b0:
	.zero	4
	.align	4
_c0:
	.zero	4
	.align	4
_d0:
	.zero	4
	.align	4


# your asm code here
	.text
	.globl _start
_start:
	movl $_b0, %eax
	addl $1, %eax
	movl %eax, $t0
	ret
