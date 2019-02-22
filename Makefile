CC = gcc
CFLAGS = -W -Wall -g 
EXEC=MiniProjet 

all: $(EXEC)

MiniProjet: LinkedList_biblio.o main.o entree_sortie.o structs.o Hashmap_biblio.o
	gcc -o MiniProjet LinkedList_biblio.o main.o entree_sortie.o structs.o Hashmap_biblio.o $(CFLAGS) -lm

main.o: main.c LinkedList_biblio.h entree_sortie.h structs.h Hashmap_biblio.h
	gcc -o main.o -c main.c $(CFLAGS)
Hashmap_biblio.o: Hashmap_biblio.c Hashmap_biblio.h LinkedList_biblio.h structs.h
	gcc -o Hashmap_biblio.o -c Hashmap_biblio.c $(CFLAGS) 
structs.o: structs.c structs.h
	gcc -o structs.o -c structs.c $(CFLAGS)

LinkedList_biblio.o: LinkedList_biblio.c structs.h
	gcc -o LinkedList_biblio.o -c LinkedList_biblio.c $(CFLAGS)

entree_sortie.o: entree_sortie.c entree_sortie.h
	gcc -o entree_sortie.o -c entree_sortie.c $(CFLAGS)

clean:
	rm -rf *.o
