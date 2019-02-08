typedef struct livre{

  int num;
  char* titre;
  char *auteur;
  struct livre * suiv;

}s_livre;

typedef struct LinkedList_biblio{

  s_livre *Head;
  int nbliv;

}LinkedList_biblio;

typedef struct HashMap_biblio{

}HashMap_biblio;
