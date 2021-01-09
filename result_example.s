读到了&&
# your asm code header here

# define your veriables and temp veriables here
	.section .rodata
	.bss
_a0:
	.zero	4
	.align	4


# your asm code here
.L0:
	movl _a0, %eax
	and $1, %eax
	movl %eax, t0
.L1:
	movl _a0, %eax
	addl $1, %eax
	movl %eax, t2
	movl t2, %eax
	movl %eax, _a0
	movl _a0, %eax
	addl $1, %eax
	movl %eax, t4
	movl t4, %eax
	movl %eax, _a0
	jmp .L0
	.section .note.GNU-stack,"",@progbits
