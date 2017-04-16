SRC =  funciones.c main.c
OBJS =  funciones.o main.o
CC = gcc
CFLAGS = -I.
HEAD = tipos.h funciones.h

#Programas objeto

funciones.o: funciones.c
	$(CC)  $(HEAD) funciones.c -c
main.o: main.c
	$(CC)  $(HEAD) main.c -c

#Compilación de programa

programa:  funciones.o main.o
	$(CC) $(HEAD) $(OBJS) -o programa
remove:
	rm *.o
removeX:
	rm programa
tar:
	tar -cvf proyecto.tar $(SRC) $(HEAD) leeme.txt makefile
	
	
	
