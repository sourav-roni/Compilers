	.file	"ass1_14CS10062.c"                  	# Source file name is ass1_14CS10062.c
	.section	.rodata				# This indicates that is a read-only data section
	.align 8					# Align with 8 byte boundary
.LC0:							#Label Of f-string 1st printf
	.string	"Enter how many elements you want:" 	
.LC1:							#Label Of f-string scanf
	.string	"%d"					
.LC2:							#Label Of f-string 2nd printf
	.string	"Enter the %d elements:\n"
.LC3:							#Label Of f-string 3rd printf
	.string	"\nEnter the item to search"
.LC4:							#Label Of f-string 4th printf
	.string	"\n%d found in position: %d\n"
.LC5:							#Label Of f-string 5th printf
	.string	"\n%d inserted in position: %d\n"
.LC6:							#Label Of f-string 6th printf
	.string	"The list of %d elements:\n"
.LC7:							#Label Of f-string 7th printf
	.string	"%6d"
	.text						#Code Starts
	.globl	main					#main is a global name
	.type	main, @function				#main is a function
main:							#main:starts
.LFB0:							#stands for function beginning
	.cfi_startproc					#Call Frame Information
	pushq	%rbp					#saved the old base pointer
	.cfi_def_cfa_offset 16				#cfi_directives are used for creation of .eh_frame to unwind stack frames for debugging
	.cfi_offset 6, -16				#and exception handling
	movq	%rsp, %rbp				#rbp <--- rsp. This sets the new stack base pointer
	.cfi_def_cfa_register 6
	subq	$432, %rsp				#This creates space in memory for array and local variables
	movq	%fs:40, %rax				#fs refers to the file segment register and 40 is offset..
	movq	%rax, -8(%rbp)				#These three instructions movq, movq and xorl check for stack
	xorl	%eax, %eax				#boundary violation and sets the return address to rbp-8
	movl	$.LC0, %edi				#edi<----starting of the format string "Enter how many elements you want:",1st parameter
	call	puts					#call puts for the library function printf
	leaq	-432(%rbp), %rax			#rax <--- (rbp-432)(&n)[This stands for load effective address (lea)]
	movq	%rax, %rsi				#rsi <--- rax(&n,2nd parameter of scanf)
	movl	$.LC1, %edi				#edi <--- starting of the format string "%d", 1st parameter
	movl	$0, %eax				#eax <--- 0
	call	__isoc99_scanf				#calls scanf,return value is stored in eax
	movl	-432(%rbp), %eax			#eax <--- (rbp-432)[n]
	movl	%eax, %esi				#esi <--- eax(n,2nd parameter of printf)
	movl	$.LC2, %edi				#edi <--- starting of the format string "Enter the %d elements:\n",1st parameter
	movl	$0, %eax				#eax <--- 0
	call	printf					#call the library function printf
	movl	$0, -424(%rbp)				#M[rbp-424] <--- 0 ; i <--- 0
	jmp	.L2					#jump to L2
.L3:
	leaq	-416(%rbp), %rax			#[Load effective address] rax <--- (rbp-416) (&a[0], i.e. the starting address)		
	movl	-424(%rbp), %edx			#edx <--- (rbp-424)[this copies the value of i to register edx]
	movslq	%edx, %rdx				#this represents conversion from 32 bit to 64 bit(sign extended)
	salq	$2, %rdx				#this represents the shift operation;2 bit left shift ; 4*i 
	addq	%rdx, %rax				#rax <--- rax+rdx;this represents a+4*i = &a[i]
	movq	%rax, %rsi				#rsi <--- rax (&a[i],the 2nd parameter of scanf)
	movl	$.LC1, %edi				#edi <--- starting of the format string "%d", 1st parameter
	movl	$0, %eax				#eax <--- 0
	call	__isoc99_scanf				#calls the library function scanf, return value in eax
	addl	$1, -424(%rbp)				#add 1 with this represents i => i=i+1
.L2:
	movl	-432(%rbp), %eax			#eax <--- n ; copy the value of n to eax
	cmpl	%eax, -424(%rbp)			#compare the value of n to the value of i
	jl	.L3					#this indicates jump to L3(if i < n)
	movl	-432(%rbp), %edx			#edx <--- (rbp-432)[this represents copying the value of n to edx]	
	leaq	-416(%rbp), %rax			#[Load Effective Address] rax <--- (rbp-416)(&a[0], i.e. the starting address)
	movl	%edx, %esi				#esi <--- edx (n,2nd parameter)
	movq	%rax, %rdi				#rdi <--- rax (a,1st parameter)
	call	inst_sort				#calls the user defined function inst_sort
	movl	$.LC3, %edi				#edi <--- starting address of the printf format string,1st parameter
	call	puts					#call puts for print
	leaq	-428(%rbp), %rax			#[Load Effective Address] rax <--- (rbp-428) (&item)
	movq	%rax, %rsi				#rsi <--- rax(&item,2nd parameter)
	movl	$.LC1, %edi				#starting address of the format string , 1st parameter of scanf
	movl	$0, %eax				#eax <--- 0
	call	__isoc99_scanf				#calls scanf, return value is in eax
	movl	-428(%rbp), %edx			#edx <--- (item,3rd parameter of bsearch )
	movl	-432(%rbp), %ecx			#ecx <--- n assigned 
	leaq	-416(%rbp), %rax			#rax <--- (rbp-416)[Load Effective Address](&a[0] the starting address)
	movl	%ecx, %esi				#copy n to esi(n,2nd parameter b_search)
	movq	%rax, %rdi				#rdi <--- rax(a,1st parameter b_search)
	call	bsearch					#calls the user-defined function bsearch,return value in eax
	movl	%eax, -420(%rbp)			#this represents loc <--- eax
	movl	-420(%rbp), %eax			#this represents eax <--- loc
	cltq						#this represents rax <--- eax
	movl	-416(%rbp,%rax,4), %edx			#this represents edx <--- (rbp-416+rax*4) (a[loc])
	movl	-428(%rbp), %eax			#this represents eax <--- item
	cmpl	%eax, %edx				#compare a[loc] and item
	jne	.L4					#jump to L4 if not equal
	movl	-420(%rbp), %eax			#this represents eax <---loc
	leal	1(%rax), %edx				#this represents edx <--- loc+1,3rd parameter
	movl	-428(%rbp), %eax			#this represents eax <--- item
	movl	%eax, %esi				#esi <--- item,2nd parameter
	movl	$.LC4, %edi				#edi <--- starting address of format string "\n%d found in position: %d\n",1st parameter
	movl	$0, %eax				#0 <--- eax
	call	printf					#call the library function printf
	jmp	.L5					#jump to L5
.L4:
	movl	-428(%rbp), %edx			#this represents edx <--- item
	movl	-432(%rbp), %ecx			#this represents ecx <--- n
	leaq	-416(%rbp), %rax			#this represents rax <--- (rbp-416)(a)
	movl	%ecx, %esi				#this represents esi <--- n,2nd parameter
	movq	%rax, %rdi				#this represents rdi <--- item,3rd parameter
	call	insert					#calls the user-defined function insert
	movl	%eax, -420(%rbp)			#loc <--- eax[return value]
	movl	-432(%rbp), %eax			#this represents eax <--- n
	addl	$1, %eax				#val(eax) <--- val(eax)+1
	movl	%eax, -432(%rbp)			#this represents n <--- n+1	
	movl	-420(%rbp), %eax			#this represents eax <--- loc
	leal	1(%rax), %edx				#this represents edx <--- loc+1,3rd parameter
	movl	-428(%rbp), %eax			#this represents eax <--- item
	movl	%eax, %esi				#this represents esi <--- item,2nd parameter
	movl	$.LC5, %edi				#this represents edi <--- starting address of the format string ,1st parameter
	movl	$0, %eax				#this represents eax <--- 0
	call	printf					#calls the library function printf
.L5:
	movl	-432(%rbp), %eax			#this represents eax <--- n
	movl	%eax, %esi				#this represents esi <--- n,2nd parameter of printf
	movl	$.LC6, %edi				#edi <--- starting address of the format string , 1st parameter of printf
	movl	$0, %eax				#0 <--- eax(return value)
	call	printf					#calls the library function printf
	movl	$0, -424(%rbp)				#i <--- 0
	jmp	.L6					#jump to L6
.L7:
	movl	-424(%rbp), %eax			#this represents eax <--- i
	cltq						#convert from 32 bit to 64 bit
	movl	-416(%rbp,%rax,4), %eax			#this represents eax <--- M[rbp-416+rax*4](a[i])
	movl	%eax, %esi				#this represents esi <--- a[i],2nd parameter of printf
	movl	$.LC7, %edi				#edi <--- starting address of the format string "%6d", 1st parameter of printf
	movl	$0, %eax				#this represents eax <--- 0
	call	printf					#calls the library function printf
	addl	$1, -424(%rbp)				#this represents i <--- i+1
.L6:
	movl	-432(%rbp), %eax			#this represents eax <--- n
	cmpl	%eax, -424(%rbp)			#compares i with n
	jl	.L7					#jump to L7 if i < n
	movl	$10, %edi				#edi <--- 10(ascii code for '\n')
	call	putchar					#calls putchar(print newline)
	movl	$0, %eax				#this represents eax <--- 0 [return value]
	movq	-8(%rbp), %rcx				
	xorq	%fs:40, %rcx
	je	.L9
	call	__stack_chk_fail
.L9:
	leave						#removes the stack frame
	.cfi_def_cfa 7, 8       			#Call frame information				
	ret						#this represents return
	.cfi_endproc					#end procedure
.LFE0:							#stands for function ending
	.size	main, .-main				#This directive is generated by compilers to include auxiliary debugging information
	.globl	inst_sort				#this makes it visible to linker
	.type	inst_sort, @function			#this indicates that inst_sort is a function
inst_sort:						#inst_sort starts
.LFB1:
	.cfi_startproc					#Call frame Information(start procedure)
	pushq	%rbp					#saves the old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp				#rbp <--- rsp
	.cfi_def_cfa_register 6				
	movq	%rdi, -24(%rbp)				#(rbp-24) <--- (num,1st parameter of inst_sort)
	movl	%esi, -28(%rbp)				#(rbp-28) <--- (n,2nd parameterof inst_sort)
	movl	$1, -8(%rbp)				#j <--- 1
	jmp	.L11					#jump to L11
.L15:
	movl	-8(%rbp), %eax				#this represents eax <--- j
	cltq						#conversion of 32 bit into 64 bit
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax*4 (address of j)
	movq	-24(%rbp), %rax				#this represents rax <--- M[rbp-24](&num[0])
	addq	%rdx, %rax				#this represents rax <--- rax + rdx (num+j)
	movl	(%rax), %eax				#this represents eax <--- *(num+j){num[j]}
	movl	%eax, -4(%rbp)				#this represents k <--- num[j]
	movl	-8(%rbp), %eax				#this represents eax <--- j 
	subl	$1, %eax				#this represents val(eax) <--- val(eax)-1
	movl	%eax, -12(%rbp)				#this represents i <--- j-1
	jmp	.L12					#jump to L12
.L14:
	movl	-12(%rbp), %eax				#this represents eax <--- i
	cltq						#conversion of 32 bit into 64 bit
	addq	$1, %rax				#i <--- i+1
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax*4
	movq	-24(%rbp), %rax				#this represents rax <--- rbp-24 [&num[0]]
	addq	%rax, %rdx				#this represents rdx <-- rax + rdx [num[i+1]]
	movl	-12(%rbp), %eax				#this represents eax <--- i
	cltq						#conversion of 32 bit into 64 bit
	leaq	0(,%rax,4), %rcx			#this represents rcx <--- rax*4
	movq	-24(%rbp), %rax				#this represents rax <--- rbp-24 [&num[0]]
	addq	%rcx, %rax				#rax <--- rax + rcx
	movl	(%rax), %eax				#eax <--- num[i]
	movl	%eax, (%rdx)				#num[i+1] <--- num[i]
	subl	$1, -12(%rbp)				#i <--- i - 1
.L12:
	cmpl	$0, -12(%rbp)				#compare i with 0
	js	.L13					#jump to L13 if sign flag is set[if(!(i>=0))
	movl	-12(%rbp), %eax				#this represents eax <--- i
	cltq						#conversion of 32 bit into 64 bits
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax*4
	movq	-24(%rbp), %rax				#this represents rax <--- (rbp-24)[&num[0]]
	addq	%rdx, %rax				#this represents rax <--- rax + rdx [&(num+i)]
	movl	(%rax), %eax				#this represents eax <--- *(num+i)
	cmpl	-4(%rbp), %eax				#compare k with num[i](num[i] > k)
	jg	.L14					#jump to L14 if greater(i >= 0 && num[i] > k)
.L13:
	movl	-12(%rbp), %eax				#this represents eax <--- i
	cltq						#conversion of 32 bit to 64 bit
	addq	$1, %rax				#this represents rax <--- rax+1
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax*4;
	movq	-24(%rbp), %rax				#this represents rax <--- (rbp-24)(&num[0])
	addq	%rax, %rdx				#this represents rdx <--- rax + rdx (num+i+1)
	movl	-4(%rbp), %eax				#this represents eax <--- k 
	movl	%eax, (%rdx)				#*(num+i+1) <--- k
	addl	$1, -8(%rbp)				#this represents  j <--- j + 1
.L11:
	movl	-8(%rbp), %eax				#eax <--- j
	cmpl	-28(%rbp), %eax				#compare j with n
	jl	.L15					#jump to L15 if j < n
	popq	%rbp					#pop rbp,break stack frame
	.cfi_def_cfa 7, 8
	ret						#return
	.cfi_endproc
.LFE1:							#stands for the function ending
	.size	inst_sort, .-inst_sort			#this is generated by compiler to include auxiliary debugging information
	.globl	bsearch					#this is visible to linker
	.type	bsearch, @function			#bsearch is a user defined function
bsearch:						#bsearch:starts
.LFB2:							#stands for function beginning
	.cfi_startproc				
	pushq	%rbp					#save old base pointer
	.cfi_def_cfa_offset 16				
	.cfi_offset 6, -16			
	movq	%rsp, %rbp				#this represents rbp <--- rsp 
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)				#this represents rdi <--- (rbp-24) (&a[0]),1st parameter bsearch
	movl	%esi, -28(%rbp)				#this represents esi <--- n , 2nd parameter bsearch
	movl	%edx, -32(%rbp)				#edx <--- item , 3rd parameter bsearch
	movl	$1, -8(%rbp)				#this represents bottom <--- 1
	movl	-28(%rbp), %eax				#this represents eax <--- n
	movl	%eax, -12(%rbp)				#this represents top <--- n
.L20:							#start of the do_while loop
	movl	-8(%rbp), %edx				#this represents edx <--- bottom
	movl	-12(%rbp), %eax				#this represents eax <--- top
	addl	%edx, %eax				#this represents eax <--- top+bottom
	movl	%eax, %edx				#this represents edx <--- eax
	shrl	$31, %edx				#edx <--- high bit of (top+bottom) ,0 if top+bottom >= 0 , 1 if top+bottom <0
	addl	%edx, %eax				#this represents eax <--- eax+edx
	sarl	%eax					#this represents eax <--- (top+bottom)/2
	movl	%eax, -4(%rbp)				#this represents mid <--- (top+bottom)/2
	movl	-4(%rbp), %eax				#this represents eax <--- mid
	cltq						#conversion of 32 bit to 64 bit
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax*4
	movq	-24(%rbp), %rax				#this represents rax <--- (rbp-24)[&a[0]]
	addq	%rdx, %rax				#this represents rax <--- rax+rdx [&a[mid]]
	movl	(%rax), %eax				#this represents eax <--- a[mid]
	cmpl	-32(%rbp), %eax				#compare a[mid] with item
	jle	.L17					#jump to L17 if a[mid] <= item
	movl	-4(%rbp), %eax				#this represents eax <--- mid
	subl	$1, %eax				#this represents eax <--- mid-1
	movl	%eax, -12(%rbp)				#this represents top <--- mid-1
	jmp	.L18					#jump to L18
.L17:
	movl	-4(%rbp), %eax				#this represents eax <--- mid
	cltq						#conversion of 32 bit into 64 bit
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax*4
	movq	-24(%rbp), %rax				#this represents rax <--- (rbp-24) (&a[0])
	addq	%rdx, %rax				#this represents rax <--- rax+rdx (&a[mid])
	movl	(%rax), %eax				#this represents eax <--- a[mid]
	cmpl	-32(%rbp), %eax				#compare a[mid] with item
	jge	.L18					#jump to L18 if a[mid] >= item
	movl	-4(%rbp), %eax				#this represents eax <--- mid
	addl	$1, %eax				#this represents eax <--- mid+1
	movl	%eax, -8(%rbp)				#this represents bottom <--- mid+1
.L18:
	movl	-4(%rbp), %eax				#this represents eax <--- mid
	cltq						#conversion of 32 bit to 64 bit
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax * 4
	movq	-24(%rbp), %rax				#this represents rax <--- (rbp-24) (&a[0])
	addq	%rdx, %rax				#this represents rax <--- rax+rdx (&a[mid])
	movl	(%rax), %eax				#this represents eax <--- a[mid]
	cmpl	-32(%rbp), %eax				#compare item with a[mid]
	je	.L19					#jump to L19 if item == a[mid]
	movl	-8(%rbp), %eax				#this represents eax <--- bottom
	cmpl	-12(%rbp), %eax				#this represents compare bottom <= top
	jle	.L20					#jump to L20 if (a[mid] != item && bottom <= top)
.L19:
	movl	-4(%rbp), %eax				#eax <--- mid[return value]
	popq	%rbp					#pop rbp
	.cfi_def_cfa 7, 8
	ret						#return[break stack frame]
	.cfi_endproc						
.LFE2:							#this is the function ending
	.size	bsearch, .-bsearch			#this is generated by compiler to include auxiliary debugging information
	.globl	insert					#this is visible to linker
	.type	insert, @function			#insert is a user defined function
insert:			
.LFB3:							#function beginning of insert
	.cfi_startproc	
	pushq	%rbp					#save old base pointer
	.cfi_def_cfa_offset 16				
	.cfi_offset 6, -16	
	movq	%rsp, %rbp				#this represents rbp <--- rsp
	.cfi_def_cfa_register 6			
	movq	%rdi, -24(%rbp)				#this represents (rbp-24) <--- rdi[&num[0],1st parameter of insert]
	movl	%esi, -28(%rbp)				#this represents (rbp-28) <--- esi [n,2nd parameter of insert]
	movl	%edx, -32(%rbp)				#this represents (rbp-32) <--- edx[k,3rd parameter of insert]
	movl	-28(%rbp), %eax				#this represents eax <--- n
	movl	%eax, -4(%rbp)				#this represents i <--- n
	jmp	.L23					#jump to L23
.L25:
	movl	-4(%rbp), %eax				#this represents eax <--- i
	cltq						#conversion of 32 bit to 64 bit
	addq	$1, %rax				#this represents eax <--- i+1
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax*4[load effective address]
	movq	-24(%rbp), %rax				#this represents rax <--- (rbp-24)[&num[0]]
	addq	%rax, %rdx				#this represents rdx <--- rdx + rax [&num[i+1]]
	movl	-4(%rbp), %eax				#this represents eax <--- i
	cltq						#conversion of 32 bit to 64 bit
	leaq	0(,%rax,4), %rcx			#this represents rcx <--- rax*4[load effective address]
	movq	-24(%rbp), %rax				#this represents rax <--- (rbp-24)[&num[0]]
	addq	%rcx, %rax				#this represents rax <--- rax+rcx (&num[i])
	movl	(%rax), %eax				#this represents eax <--- num[i]
	movl	%eax, (%rdx)				#this represents num[i+1] <--- num[i]
	subl	$1, -4(%rbp)				#i <--- i - 1
.L23:		
	cmpl	$0, -4(%rbp)				#compare i with 0
	js	.L24					#jump to L24 if (!(i >= 0))
	movl	-4(%rbp), %eax				#this represents eax<---i
	cltq						#this represents conversion from 32 bit to 64 bit
	leaq	0(,%rax,4), %rdx   			#this represents rdx<--- rax*4[load effective address]
	movq	-24(%rbp), %rax				#this represents rax<---(rbp - 24)[&num[0]] 
	addq	%rdx, %rax				#this represents rax<---rax+rdx
	movl	(%rax), %eax				#this represents eax<---num[i]
	cmpl	-32(%rbp), %eax				#this represents compare k with num[i]	
	jg	.L25					#this represents jump to L25 if num[i] greater than k
.L24:
	movl	-4(%rbp), %eax				#this represents eax <--- i
	cltq						#conversion of 32 bit to 64 bit
	addq	$1, %rax				#this represents rax <--- rax + 1
	leaq	0(,%rax,4), %rdx			#this represents rdx <--- rax*4 [Load effective address]
	movq	-24(%rbp), %rax				#this represents rax <--- (rbp-24)(&num[0])
	addq	%rax, %rdx				#this represents rdx <--- rax + rdx(&num[i+1])
	movl	-32(%rbp), %eax				#this represents eax <--- k
	movl	%eax, (%rdx)				#num[i+1] <--- k
	movl	-4(%rbp), %eax				#this represents eax <--- i
	addl	$1, %eax				#this represents eax <--- i+1
	popq	%rbp					#pop rbp
	.cfi_def_cfa 7, 8
	ret						#return
	.cfi_endproc
.LFE3:							#function ending
	.size	insert, .-insert			
	.ident	"GCC: (Ubuntu 4.9.3-13ubuntu2) 4.9.3"
	.section	.note.GNU-stack,"",@progbits
