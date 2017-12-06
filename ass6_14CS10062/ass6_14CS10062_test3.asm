	.file	"ass6_14CS10062_test3.c"
	.section	.rodata
.LFE0:
	.string	"Enter five integers one by one :\n"
.LFE1:
	.string	"Enter the number  \n"
.LFE2:
	.string	"The sum of the array elements is "
.LFE3:
	.string	".\n"
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$124, %rsp
	movl	$5, %eax
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	movl	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	$.LFE0, %edi
	call	prints
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	$0, %eax
	movl	%eax, -52(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -28(%rbp)
.L2:
	movl	$5, %eax
	movl	%eax, -56(%rbp)
	movl	-28(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jl	.L0
	jmp	.L1
	jmp	.L1
.L3:
	movl	-28(%rbp), %eax
	movl	%eax, -60(%rbp)
	movl	$1, %eax
	movl	%eax, -64(%rbp)
	movl	-28(%rbp), %eax
	movl	-64(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
	jmp	.L2
.L0:
	movl	$.LFE1, %edi
	call	prints
	movl	%eax, -68(%rbp)
	movl	-68(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	$4, %eax
	movl	%eax, -76(%rbp)
	movl	-28(%rbp), %eax
	imull	-76(%rbp), %eax
	movl	%eax, -72(%rbp)
	movl	-72(%rbp), %eax
	movslq	%eax, %rax
	leaq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -80(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rdi
	call	readi
	movl	%eax, -92(%rbp)
	movl	-72(%rbp), %eax
	movslq	%eax, %rax
	leaq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	-92(%rbp), %edx
	movl	%edx, (%rax)
	movl	$4, %eax
	movl	%eax, -100(%rbp)
	movl	-28(%rbp), %eax
	imull	-100(%rbp), %eax
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movslq	%eax, %rax
	leaq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -104(%rbp)
	movl	-36(%rbp), %eax
	movl	-104(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -108(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, -36(%rbp)
	jmp	.L3
.L1:
	movl	$.LFE2, %edi
	call	prints
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	-36(%rbp), %edi
	call	printi
	movl	%eax, -116(%rbp)
	movl	-116(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	$.LFE3, %edi
	call	prints
	movl	%eax, -120(%rbp)
	movl	-120(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	$0, %eax
	movl	%eax, -124(%rbp)
	movl	-124(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	main, .-main
ÿ