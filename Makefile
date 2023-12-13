a.out: main.o radq.o
	gcc -g -o  a.out main.o radq.o

radq.o: radq.c
	gcc -g -c radq.c

main.o: main.c radq.h
	gcc -g -c main.c