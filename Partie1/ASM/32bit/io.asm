

global print
print:
	push ebp		;;on sauvegarde la valeur de l'ancien base pointer
	mov ebp, esp		;;on affecte la valeur du nouveau base pointer
	push eax		;;on sauvegarde la valeur de eax qui sera modifiée par le script
	push ebx		;;on sauvegarde la valeur de ebx qui sera modifiée par le script
	push ecx		;;on sauvegarde la valeur de ecx qui sera modifiée par le script
	push edx		;;on sauvegarde la valeur de edx qui sera modifiée par le script
	
	mov eax, 4		;;4 == sys_write en x86
	mov ebx, [ebp + 8]	;;on stock le premier paramètre dans ebx
	mov ecx, [ebp + 12]	;;on stock le second paramètre dans ecx
	mov edx, [ebp + 16]	;;on stock le troisième paramètre dans edx
	int 80h			;;[32bit]int 80h == [64bit]syscall
	
	pop edx			;;on récupère la valeur d'edx avant l'appel à la fonction print 
	pop ecx			;;on récupère la valeur d'ecx avant l'appel à la fonction print
	pop ebx			;;on récupère la valeur d'ebx avant l'appel à la fonction print
	pop eax			;;on récupère la valeur d'eax avant l'appel à la fonction print
	pop ebp			;;on récupère l'ancien base pointer
	ret	
	
