# your asm code header here

# define your veriables and temp veriables here
	.bss
_a:
	.zero	4
	.align	4
t0:
	.zero	4
	.align	4


# your asm code here
	.text
	.globl main
	.type main, @function
main:
	movl $1, _a
	# your own code of AND operation here
	jl .L1
	# your asm code of AND operation end
	movl _a, %eax
	addl $1, %eax
	movl %eax, t0
	jmp main
.L1:
	ret
