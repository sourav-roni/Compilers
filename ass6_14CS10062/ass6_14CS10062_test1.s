	.file	"ass6_14CS10062_test1.c"
	.section	.rodata
.LFE0:
	.string	"Enter 10 numbers in sorted order\n"
.LFE1:
	.string	"Enter the value to search\n"
.LFE2:
	.string	"The querry was found at location "
.LFE3:
	.string	"\n"
.LFE4:
	.string	"The element searched for was not found.\n"
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$272, %rsp
	movl	$10, %eax
	movl	%eax, -24(%rbp)
	leaq	-68(%rbp), %rax
	movq	%rax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -76(%rbp)
	movl	$.LFE0, %edi
	call	prints
	movl	%eax, -96(%rbp)
	movl	-96(%rbp), %eax
	movl	%eax, -80(%rbp)
	movl	$0, %eax
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, -4(%rbp)
.L2:
	movl	$10, %eax
	movl	%eax, -104(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-104(%rbp), %eax
	jl	.L0
	jmp	.L1
	jmp	.L1
.L3:
	movl	-4(%rbp), %eax
	movl	%eax, -108(%rbp)
	movl	$1, %eax
	movl	%eax, -112(%rbp)
	movl	-4(%rbp), %eax
	movl	-112(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	jmp	.L2
.L0:
	movl	$4, %eax
	movl	%eax, -120(%rbp)
	movl	-4(%rbp), %eax
	imull	-120(%rbp), %eax
	movl	%eax, -116(%rbp)
	movl	-116(%rbp), %eax
	movslq	%eax, %rax
	leaq	-64(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -124(%rbp)
	leaq	-68(%rbp), %rax
	movq	%rax, -132(%rbp)
	movq	-132(%rbp), %rdi
	call	readi
	movl	%eax, -136(%rbp)
	movl	-116(%rbp), %eax
	movslq	%eax, %rax
	leaq	-64(%rbp), %rdx
	addq	%rdx, %rax
	movl	-136(%rbp), %edx
	movl	%edx, (%rax)
	jmp	.L3
.L1:
	movl	$.LFE1, %edi
	call	prints
	movl	%eax, -140(%rbp)
	movl	-140(%rbp), %eax
	movl	%eax, -80(%rbp)
	leaq	-68(%rbp), %rax
	movq	%rax, -148(%rbp)
	movq	-148(%rbp), %rdi
	call	readi
	movl	%eax, -152(%rbp)
	movl	-152(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$0, %eax
	movl	%eax, -156(%rbp)
	movl	-156(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	$9, %eax
	movl	%eax, -160(%rbp)
	movl	-160(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-8(%rbp), %eax
	movl	-12(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -164(%rbp)
	movl	$2, %eax
	movl	%eax, -168(%rbp)
	movl	-164(%rbp), %eax
	cltd
	idivl	-168(%rbp)
	movl	%eax, -172(%rbp)
	movl	-172(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$0, %eax
	movl	%eax, -176(%rbp)
	movl	-176(%rbp), %eax
	movl	%eax, -84(%rbp)
.L11:
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jle	.L4
	jmp	.L5
	jmp	.L5
.L4:
	movl	$4, %eax
	movl	%eax, -184(%rbp)
	movl	-16(%rbp), %eax
	imull	-184(%rbp), %eax
	movl	%eax, -180(%rbp)
	movl	-180(%rbp), %eax
	movslq	%eax, %rax
	leaq	-64(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -188(%rbp)
	movl	-188(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L6
	jmp	.L7
	jmp	.L8
.L6:
	movl	$1, %eax
	movl	%eax, -192(%rbp)
	movl	-16(%rbp), %eax
	movl	-192(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -196(%rbp)
	movl	-196(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L8
.L7:
	movl	$4, %eax
	movl	%eax, -204(%rbp)
	movl	-16(%rbp), %eax
	imull	-204(%rbp), %eax
	movl	%eax, -200(%rbp)
	movl	-200(%rbp), %eax
	movslq	%eax, %rax
	leaq	-64(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -208(%rbp)
	movl	-208(%rbp), %eax
	cmpl	-20(%rbp), %eax
	je	.L9
	jmp	.L10
	jmp	.L8
.L9:
	movl	$.LFE2, %edi
	call	prints
	movl	%eax, -212(%rbp)
	movl	-212(%rbp), %eax
	movl	%eax, -80(%rbp)
	movl	$1, %eax
	movl	%eax, -216(%rbp)
	movl	-16(%rbp), %eax
	movl	-216(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -220(%rbp)
	movl	-220(%rbp), %edi
	call	printi
	movl	%eax, -224(%rbp)
	movl	-224(%rbp), %eax
	movl	%eax, -80(%rbp)
	movl	$.LFE3, %edi
	call	prints
	movl	%eax, -228(%rbp)
	movl	-228(%rbp), %eax
	movl	%eax, -80(%rbp)
	movl	$10, %eax
	movl	%eax, -232(%rbp)
	movl	-232(%rbp), %eax
	negl	%eax
	movl	%eax, -236(%rbp)
	movl	-236(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$1, %eax
	movl	%eax, -240(%rbp)
	movl	-240(%rbp), %eax
	movl	%eax, -84(%rbp)
	jmp	.L8
.L10:
	movl	$1, %eax
	movl	%eax, -244(%rbp)
	movl	-16(%rbp), %eax
	movl	-244(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -248(%rbp)
	movl	-248(%rbp), %eax
	movl	%eax, -12(%rbp)
.L8:
	movl	-8(%rbp), %eax
	movl	-12(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -252(%rbp)
	movl	$2, %eax
	movl	%eax, -256(%rbp)
	movl	-252(%rbp), %eax
	cltd
	idivl	-256(%rbp)
	movl	%eax, -260(%rbp)
	movl	-260(%rbp), %eax
	movl	%eax, -16(%rbp)
	jmp	.L11
.L5:
	movl	$0, %eax
	movl	%eax, -264(%rbp)
	movl	-84(%rbp), %eax
	cmpl	-264(%rbp), %eax
	je	.L12
	jmp	.L13
	jmp	.L13
.L12:
	movl	$.LFE4, %edi
	call	prints
	movl	%eax, -268(%rbp)
	movl	-268(%rbp), %eax
	movl	%eax, -80(%rbp)
	jmp	.L13
.L13:
	movl	$0, %eax
	movl	%eax, -272(%rbp)
	movl	-272(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	main, .-main
