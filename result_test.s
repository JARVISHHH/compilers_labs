# your asm code header here

# define your veriables and temp veriables here
	.section .rodata
_STR_PRINT0:
	.string	"参数为%d\n"
_STR_PRINT1:
	.string	"b的值为%d\n"
_STR_PRINT2:
	.string	"斐波那契结果为 %d\n"
_STR_PRINT3:
	.string	"Hello world!\n"
	.bss
_a0:
	.zero	4
	.align	4
_b0:
	.zero	4
	.align	4
_n0:
	.zero	4
	.align	4
t0:
	.zero	4
	.align	4
t1:
	.zero	4
	.align	4
t2:
	.zero	4
	.align	4
t3:
	.zero	4
	.align	4
t4:
	.zero	4
	.align	4
t5:
	.zero	4
	.align	4
t6:
	.zero	4
	.align	4
t7:
	.zero	4
	.align	4
t8:
	.zero	4
	.align	4
t9:
	.zero	4
	.align	4
t10:
	.zero	4
	.align	4
t11:
	.zero	4
	.align	4
t12:
	.zero	4
	.align	4
t13:
	.zero	4
	.align	4


# your asm code here
	.text
	.global f
	.type f, @function
f:
	movl 4(%esp), %eax
	movl %eax, _n0
	movl _n0, %eax
	pushl %eax
	pushl $_STR_PRINT0
	call printf
	addl $8, %esp
	movl _n0, %eax
	cmpl $0, %eax
	jne .L0
	movl $0, %eax
	ret
.L0:
	movl _n0, %eax
	cmpl $1, %eax
	jne .L1
	movl $0, %eax
	ret
.L1:
	movl _n0, %eax
	cmpl $2, %eax
	jne .L2
	movl $0, %eax
	ret
.L2:
	movl _n0, %eax
	cmpl $3, %eax
	jne .L3
	movl $0, %eax
	ret
.L3:
	movl _n0, %eax
	subl $1, %eax
	movl %eax, t6
	movl t6, %eax
	pushl %eax
	call f
	addl $4, %esp
	movl %eax, t5

	movl _n0, %eax
	subl $1, %eax
	movl %eax, t8
	movl t8, %eax
	pushl %eax
	call f
	addl $4, %esp
	movl %eax, t7

	movl t5, %eax
	addl t7, %eax
	movl %eax, t4
	movl t4, %eax
	ret

	.text
	.global main
	.type main, @function
main:
	movl $0, _a0
	movl $100000, _b0
	movl _b0, %eax
	pushl %eax
	pushl $_STR_PRINT1
	call printf
	addl $8, %esp
	movl _b0, %eax
	movl %eax, t11
	pushl %eax
	call f
	addl $4, %esp
	movl %eax, t10
	movl t11, %eax
	movl %eax, _b0

	movl t10, %eax
	movl %eax, _a0
	movl _a0, %eax
	pushl %eax
	pushl $_STR_PRINT2
	call printf
	addl $8, %esp
	pushl $_STR_PRINT3
	call printf
	addl $4, %esp
	movl $0, %eax
	ret

	.section .note.GNU-stack,"",@progbits
