a.out: lista_main.o lista_se.o
	gcc -g -o  a.out lista_main.o lista_se.o

lista_main.o: lista_main.c lista_se.h
	gcc -g -c lista_main.c

lista_se.o: lista_se.c lista_se.h
	gcc -g -c lista_se.c