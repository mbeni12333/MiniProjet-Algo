
#ifndef _STRUCTS_H_
#define _STRUCTS_H_

typedef struct livre{

  int num;
  char* titre;
  char *auteur;
  struct livre * suiv;

}s_livre;



/*typedef struct HashMap_biblio{

}HashMap_biblio;*/


s_livre* creer_livre(int num, char* titre, char* auteur);

#endif