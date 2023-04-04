.file"main.c"
.text
.globlmain
.typemain, @function
main:
.LFB0:
.cfi_startproc
pushq%rbp
.cfi_def_cfa_offset 16
.cfi_offset 6, -16
movq%rsp, %rbp
.cfi_def_cfa_register 6
movl$0, %eax
popq%rbp
.cfi_def_cfa 7, 8
ret
.cfi_endproc
.LFE0:
.sizemain, .-main
.ident"GCC: (Ubuntu 5.4.0-139 ubuntu1~20.04.5) 5.4.0"
.section.note.GNU-stack,"",@progbits
