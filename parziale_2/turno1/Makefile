a.out: main.o radice.o
	gcc -g radice.o main.o -o a.out

main.o: main.c radice.h
	gcc -g -c main.c

radice.o: radice.c
	gcc -g -c radice.c