识别到while了
读到了&&
# your asm code header here

# define your veriables and temp veriables here
	.bss
_a0:
	.zero	4
	.align	4


# your asm code here
	.text
	.globl _start
_start:
_start:
_start:
	# your own code of AND operation here
	jl @1
	# your asm code of AND operation end
@0:
	movl $_a0, %eax
	addl $1, %eax
	movl %eax, $t0
	movl $t0, _a0
	movl $_a0, %eax
	addl $1, %eax
	movl %eax, $t0
	movl $t0, _a0
	jmp _start
@1:
	ret
