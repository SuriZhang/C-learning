a.out: printmain.o read.o
	gcc printmain.c read.c
printmain.o:printmain.c
	gcc -c printmain.c
read.o:read.c
	gcc -c read.c

