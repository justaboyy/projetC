

64: nasm64 gcc64

32: nasm32 gcc32

nasm64:
	nasm -f elf64 ASM/64bit/io.asm -o io.o

gcc64:
	gcc -D DEFAULT -g main.c lib/io.c io.o -o a.out

nasm32:
	nasm -f elf ASM/32bit/io.asm -o io.o

gcc32:
	gcc -D DEFAULT -g -m32 main.c lib/io.c io.o -o a.out

TODO1: nasm64
	gcc -D TODO1 -g main.c lib/io.c io.o -o a.out

TODO2: nasm64
	gcc -D TODO2 -g main.c lib/io.c io.o -o a.out
	
TODO3: nasm64
	gcc -D TODO3 -g main.c lib/io.c io.o -o a.out
	
TODO4: nasm64
	gcc -D TODO4 -g main.c lib/io.c io.o -o a.out
	
TODO5: nasm64
	gcc -D TODO5 -g main.c lib/io.c io.o -o a.out
	
TODO6: nasm64
	gcc -D TODO6 -g main.c lib/io.c io.o -o a.out

TODO1_32: nasm32
	gcc -D TODO1 -g -m32 main.c lib/io.c io.o -o a.out
	
TODO2_32:nasm32
	gcc -D TODO2 -g -m32 main.c lib/io.c io.o -o a.out

TODO3_32:nasm32
	gcc -D TODO3 -g -m32 main.c lib/io.c io.o -o a.out

TODO4_32:nasm32
	gcc -D TODO4 -g -m32 main.c lib/io.c io.o -o a.out

TODO5_32:nasm32
	gcc -D TODO5 -g -m32 main.c lib/io.c io.o -o a.out

TODO6_32:nasm32
	gcc -D TODO6 -g -m32 main.c lib/io.c io.o -o a.out

clean:
	rm *.o*
