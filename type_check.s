# your asm code header here

# define your veriables and temp veriables here
	.section .rodata
_STR_CONST0:
	.string	"0"
	.bss
_a0:
	.zero	4
	.align	4


# your asm code here
	.text
	.global main
	.type main, @function
main:
	subl $24, %esp
	movl $10, %eax
	addl $0, %eax
	movl %eax, 20(%esp)
	movl t1, %eax
	movl %eax, _a0
	movl $10, %eax
	addl $0, %eax
	movl %eax, 16(%esp)
	movl t3, %eax
	movl %eax, _a0
	movl $0, %eax
	addl $24, %esp
	ret

	.section .note.GNU-stack,"",@progbits
