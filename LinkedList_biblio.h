#include <stdlib.h>
#include <stdio.h>
#include "structs.h"

#ifndef _LINKED_LIST_BIBLIO_H_
#define _LINKED_LIST_BIBLIO_H_


typedef struct LinkedList_biblio{
  s_livre* head;// la tete 
  int nbliv; // nombres de livres
}LinkedList_biblio;

int liste_vide(LinkedList_biblio* Biblio);

LinkedList_biblio* initialise_biblio();

void ajouter_elem(LinkedList_biblio* Biblio,
           int num,char* titre, char* auteur);

void lecture_n_entree(char* nomfic, int n, LinkedList_biblio *B);

s_livre* recherche_par_num(LinkedList_biblio* B, int num);
s_livre* recherche_par_titre(LinkedList_biblio* B, char* titre);
s_livre* recherche_par_auteur(LinkedList_biblio* B, char* auteur);

#endif
