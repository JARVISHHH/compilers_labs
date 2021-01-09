
# your asm code header here

# define your veriables and temp veriables here
	.section .rodata
_STR_PRINT0:
	.string	"Success\n"
_STR_PRINT1:
	.string	"Failed\n"
_STR_SCAN0:
	.string	"%d"
_STR_SCAN1:
	.string	"%d"

	.section .bss
_b0:
	.zero	4
	.align	4
_a0:
	.zero	4
	.align	4

	.section .data


# your asm code here
	.text
	.global main
	.type main, @function
main:
	subl $16, %esp
	pushl $_a0
	pushl $_STR_SCAN0
	call scanf
	addl $8, %esp
	pushl $_b0
	pushl $_STR_SCAN1
	call scanf
	addl $8, %esp
	movl _a0, %eax
	cmpl _b0, %eax
	movl %eax, 12(%esp)
	movl 12(%esp), %eax
	xor 12(%esp), %eax
	movl %eax, 8(%esp)
	cmpl $0, %eax
	je .L1
	pushl $_STR_PRINT0
	call printf
	addl $4, %esp
	jmp .L0
.L1:
	pushl $_STR_PRINT1
	call printf
	addl $4, %esp
.L0:
	movl $0, %eax
	addl $16, %esp
	ret

	.section .note.GNU-stack,"",@progbits
