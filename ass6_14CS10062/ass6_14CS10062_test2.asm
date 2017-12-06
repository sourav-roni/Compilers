	.file	"ass6_14CS10062_test2.c"
	.section	.rodata
.LFE0:
	.string	"Enter Number\n"
.LFE1:
	.string	"Number Entered is "
.LFE2:
	.string	"\nFibonacci Result is "
.LFE3:
	.string	"\n"
	.text
	.globl	fibonacci
	.type	fibonacci, @function
fibonacci:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)
	subq	$36, %rsp
	movl	$2, %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	$1, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	fibonacci, .-fibonacci
	jmp	.L3
.L1:
	movl	$1, %eax
	movl	%eax, -16(%rbp)
	movl	-4(%rbp), %eax
	movl	-16(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %edi
	call	fibonacci
	movl	%eax, -24(%rbp)
	movl	$2, %eax
	movl	%eax, -28(%rbp)
	movl	-4(%rbp), %eax
	movl	-28(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %edi
	call	fibonacci
	movl	%eax, -36(%rbp)
	movl	-24(%rbp), %eax
	movl	-36(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	fibonacci, .-fibonacci
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$76, %rsp
	leaq	-12(%rbp), %rax
	movq	%rax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$.LFE0, %edi
	call	prints
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -24(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, -44(%rbp)
	movq	-44(%rbp), %rdi
	call	readi
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$.LFE1, %edi
	call	prints
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-16(%rbp), %edi
	call	printi
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-16(%rbp), %edi
	call	fibonacci
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$.LFE2, %edi
	call	prints
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	-20(%rbp), %edi
	call	printi
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$.LFE3, %edi
	call	prints
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movl	%eax, -24(%rbp)
	movl	$0, %eax
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	main, .-main
.L3:
.L2:
ÿ