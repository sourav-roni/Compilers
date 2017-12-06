	.file	"ass6_14CS10062_test4.c"
	.section	.rodata
.LFE0:
	.string	"The addtion of the two numbers is\n"
.LFE1:
	.string	"\n"
.LFE2:
	.string	"The subtraction of the two numbers is\n"
.LFE3:
	.string	"\n"
.LFE4:
	.string	"The multiplication of the two numbers is\n"
.LFE5:
	.string	"\n"
.LFE6:
	.string	"Larger among the two numbers is \n"
.LFE7:
	.string	"\n"
.LFE8:
	.string	"Smaller among the two numbers is\n"
.LFE9:
	.string	"\n"
.LFE10:
	.string	"Enter first number\n"
.LFE11:
	.string	"Enter second number\n"
	.text
	.globl	test
	.type	test, @function
test:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	subq	$84, %rsp
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LFE0, %edi
	call	prints
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-12(%rbp), %edi
	call	printi
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$.LFE1, %edi
	call	prints
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %eax
	movl	-8(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LFE2, %edi
	call	prints
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-12(%rbp), %edi
	call	printi
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$.LFE3, %edi
	call	prints
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %eax
	imull	-8(%rbp), %eax
	movl	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$.LFE4, %edi
	call	prints
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-12(%rbp), %edi
	call	printi
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$.LFE5, %edi
	call	prints
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jg	.L0
	jmp	.L1
	jmp	.L2
.L0:
	movl	-4(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -16(%rbp)
	jmp	.L2
.L1:
	movl	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -16(%rbp)
.L2:
	movl	$.LFE6, %edi
	call	prints
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-12(%rbp), %edi
	call	printi
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$.LFE7, %edi
	call	prints
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$.LFE8, %edi
	call	prints
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-16(%rbp), %edi
	call	printi
	movl	%eax, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$.LFE9, %edi
	call	prints
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -20(%rbp)
	nop
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	test, .-test
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$52, %rsp
	movl	$.LFE10, %edi
	call	prints
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -16(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, -28(%rbp)
	movq	-28(%rbp), %rdi
	call	readi
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$.LFE11, %edi
	call	prints
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -16(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, -44(%rbp)
	movq	-44(%rbp), %rdi
	call	readi
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %edi
	movl	-8(%rbp), %esi
	call	test
	movl	$0, %eax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	main, .-main
