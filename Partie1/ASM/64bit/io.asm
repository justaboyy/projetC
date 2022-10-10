
section .text
global print
print:
	mov rax, 1		;;sys_write == 1
				;;tout les autres paramètres sont passés automatiquement dans les bons registres en x64
	syscall
	ret