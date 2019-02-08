CC = gcc
CFLAGS = -W -Wall -g
EXEC=MiniProjet 

all: $(EXEC)

MiniProjet: LinkedList_biblio.o main.o entree_sortie.o
	gcc -o MiniProjet LinkedList_biblio.o main.o entree_sortie.o

main.o: main.c LinkedList_biblio.h entree_sortie.h
	gcc -o main.o -c main.c $(CFLAGS)

LinkedList_biblio.o: LinkedList_biblio.c 
	gcc -o LinkedList_biblio.o -c LinkedList_biblio.c $(CFLAGS)

entree_sortie.o: entree_sortie.c
	gcc -o entree_sortie.o -c entree_sortie.c $(CFLAGS)

clean:
	rm -rf *.o
