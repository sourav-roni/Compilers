	.file	"ass6_14CS10062_test5.c"
	.section	.rodata
.LFE0:
	.string	"Enter the elements of the first array : \n"
.LFE1:
	.string	"Enter the element: "
.LFE2:
	.string	"Enter the elements of the second array: \n"
.LFE3:
	.string	"Enter element : "
.LFE4:
	.string	"Dot product of above two entered vectors is "
.LFE5:
	.string	".\n"
.LFE6:
	.string	" Enter the number whose factorial you want : "
.LFE7:
	.string	"The factorial of "
.LFE8:
	.string	" is "
.LFE9:
	.string	".\n"
	.text
	.globl	fact
	.type	fact, @function
fact:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)
	subq	$28, %rsp
	movl	$0, %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	je	.L0
	jmp	.L1
.L1:
	movl	$1, %eax
	movl	%eax, -12(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	je	.L0
	jmp	.L2
	jmp	.L3
.L0:
	movl	$1, %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	fact, .-fact
	jmp	.L4
.L2:
	movl	$1, %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %eax
	movl	-20(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %edi
	call	fact
	movl	%eax, -28(%rbp)
	movl	-4(%rbp), %eax
	imull	-28(%rbp), %eax
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	fact, .-fact
	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$260, %rsp
	movl	$3, %eax
	movl	%eax, -4(%rbp)
	movl	$3, %eax
	movl	%eax, -20(%rbp)
	movl	$.LFE0, %edi
	call	prints
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$0, %eax
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -48(%rbp)
.L7:
	movl	$3, %eax
	movl	%eax, -68(%rbp)
	movl	-48(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jl	.L5
	jmp	.L6
	jmp	.L6
.L8:
	movl	$1, %eax
	movl	%eax, -76(%rbp)
	movl	-48(%rbp), %eax
	movl	-76(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -72(%rbp)
	jmp	.L7
.L5:
	movl	$.LFE1, %edi
	call	prints
	movl	%eax, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$4, %eax
	movl	%eax, -88(%rbp)
	movl	-48(%rbp), %eax
	imull	-88(%rbp), %eax
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rax
	leaq	-16(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -92(%rbp)
	leaq	-52(%rbp), %rax
	movq	%rax, -100(%rbp)
	movq	-100(%rbp), %rdi
	call	readi
	movl	%eax, -104(%rbp)
	movl	-84(%rbp), %eax
	movslq	%eax, %rax
	leaq	-16(%rbp), %rdx
	addq	%rdx, %rax
	movl	-104(%rbp), %edx
	movl	%edx, (%rax)
	jmp	.L8
.L6:
	movl	$.LFE2, %edi
	call	prints
	movl	%eax, -108(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$0, %eax
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl	%eax, -48(%rbp)
.L11:
	movl	$3, %eax
	movl	%eax, -116(%rbp)
	movl	-48(%rbp), %eax
	cmpl	-116(%rbp), %eax
	jl	.L9
	jmp	.L10
	jmp	.L10
.L12:
	movl	$1, %eax
	movl	%eax, -124(%rbp)
	movl	-48(%rbp), %eax
	movl	-124(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -120(%rbp)
	jmp	.L11
.L9:
	movl	$.LFE3, %edi
	call	prints
	movl	%eax, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$4, %eax
	movl	%eax, -136(%rbp)
	movl	-48(%rbp), %eax
	imull	-136(%rbp), %eax
	movl	%eax, -132(%rbp)
	movl	-132(%rbp), %eax
	movslq	%eax, %rax
	leaq	-32(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -140(%rbp)
	leaq	-52(%rbp), %rax
	movq	%rax, -148(%rbp)
	movq	-148(%rbp), %rdi
	call	readi
	movl	%eax, -152(%rbp)
	movl	-132(%rbp), %eax
	movslq	%eax, %rax
	leaq	-32(%rbp), %rdx
	addq	%rdx, %rax
	movl	-152(%rbp), %edx
	movl	%edx, (%rax)
	jmp	.L12
.L10:
	movl	$0, %eax
	movl	%eax, -156(%rbp)
	movl	-156(%rbp), %eax
	movl	%eax, -56(%rbp)
	movl	$0, %eax
	movl	%eax, -160(%rbp)
	movl	-160(%rbp), %eax
	movl	%eax, -48(%rbp)
.L15:
	movl	$3, %eax
	movl	%eax, -164(%rbp)
	movl	-48(%rbp), %eax
	cmpl	-164(%rbp), %eax
	jl	.L13
	jmp	.L14
	jmp	.L14
.L16:
	movl	$1, %eax
	movl	%eax, -172(%rbp)
	movl	-48(%rbp), %eax
	movl	-172(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl	%eax, -168(%rbp)
	jmp	.L15
.L13:
	movl	$4, %eax
	movl	%eax, -180(%rbp)
	movl	-48(%rbp), %eax
	imull	-180(%rbp), %eax
	movl	%eax, -176(%rbp)
	movl	-176(%rbp), %eax
	movslq	%eax, %rax
	leaq	-16(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -184(%rbp)
	movl	$4, %eax
	movl	%eax, -192(%rbp)
	movl	-48(%rbp), %eax
	imull	-192(%rbp), %eax
	movl	%eax, -188(%rbp)
	movl	-188(%rbp), %eax
	movslq	%eax, %rax
	leaq	-32(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -196(%rbp)
	movl	-184(%rbp), %eax
	imull	-196(%rbp), %eax
	movl	%eax, -200(%rbp)
	movl	-56(%rbp), %eax
	movl	-200(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -204(%rbp)
	movl	-204(%rbp), %eax
	movl	%eax, -56(%rbp)
	jmp	.L16
.L14:
	movl	$.LFE4, %edi
	call	prints
	movl	%eax, -208(%rbp)
	movl	-208(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	-56(%rbp), %edi
	call	printi
	movl	%eax, -212(%rbp)
	movl	-212(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$.LFE5, %edi
	call	prints
	movl	%eax, -216(%rbp)
	movl	-216(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$.LFE6, %edi
	call	prints
	movl	%eax, -220(%rbp)
	movl	-220(%rbp), %eax
	movl	%eax, -44(%rbp)
	leaq	-44(%rbp), %rax
	movq	%rax, -228(%rbp)
	movq	-228(%rbp), %rdi
	call	readi
	movl	%eax, -232(%rbp)
	movl	-232(%rbp), %eax
	movl	%eax, -36(%rbp)
	movl	-36(%rbp), %edi
	call	fact
	movl	%eax, -236(%rbp)
	movl	-236(%rbp), %eax
	movl	%eax, -40(%rbp)
	movl	$.LFE7, %edi
	call	prints
	movl	%eax, -240(%rbp)
	movl	-240(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	-36(%rbp), %edi
	call	printi
	movl	%eax, -244(%rbp)
	movl	-244(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$.LFE8, %edi
	call	prints
	movl	%eax, -248(%rbp)
	movl	-248(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	-40(%rbp), %edi
	call	printi
	movl	%eax, -252(%rbp)
	movl	-252(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$.LFE9, %edi
	call	prints
	movl	%eax, -256(%rbp)
	movl	-256(%rbp), %eax
	movl	%eax, -44(%rbp)
	movl	$0, %eax
	movl	%eax, -260(%rbp)
	movl	-260(%rbp), %eax
	movq	%rbp, %rsp
	popq	%rbp
	ret
	.size	main, .-main
.L4:
.L3:
ÿ