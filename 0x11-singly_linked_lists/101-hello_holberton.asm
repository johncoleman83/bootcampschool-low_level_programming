	.file	"101-hello_holberton.c"
	.section	.rodata
.LC0:
	.string	"Hello, Holberton"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rcx
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rax, %rcx
	.cfi_def_cfa_register 6
	movl	$.LC0, %edi
	call	puts
	movl	$0, %eax
	popq	%rcx
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
