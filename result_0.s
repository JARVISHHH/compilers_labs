# your asm code header here

# define your veriables and temp veriables here
	.section .rodata
_STR_PRINT0:
	.string	"hello world"
_STR_PRINT1:
	.string	"result is: %d\n"
	.bss
_b0:
	.zero	4
	.align	4
_a0:
	.zero	4
	.align	4
_a1:
	.zero	4
	.align	4


# your asm code here
	movl $0, _a0
	movl $2, _b0
	movl _a0, %eax
	addl _b0, %eax
	movl %eax, t2
	movl t2, %eax
	addl $1, %eax
	movl %eax, t1
	movl t1, %eax
	movl %eax, _a0
	movl $2, %eax
	xor $2, %eax
	movl %eax, t4
	movl t4, %eax
	cmpl $3, %eax
	jne .L0
	movl $2, _a1
	movl _a1, %eax
	addl $2, %eax
	movl %eax, t6
	movl t6, %eax
	movl %eax, _a1
	movl _a1, %eax
	addl $3, %eax
	movl %eax, t8
	movl t8, %eax
	movl %eax, _a1
.L0:
	movl _a0, %eax
	cmpl _b0, %eax
	jne .L2
.L1:
	pushl $_STR_PRINT0
	call printf
	addl $4, %esp
	movl _a0, %eax
	pushl %eax
	call printf
	addl $4, %esp
	movl _c0, %eax
	pushl %eax
	pushl $_STR_PRINT1
	call printf
	addl $5, %esp
	jmp .L0
	.section .note.GNU-stack,"",@progbits
