#include "structs.h"
#include <stdlib.h>


s_livre* creer_livre(int num, char* titre, char* auteur){
  
  // cette fonction cree et initialise un livre

  // allocation
  s_livre* nouv = (s_livre*)malloc(sizeof(s_livre));
  

  // initialisation
  nouv->num = num;
  nouv->titre = strdup(titre);
  nouv->auteur = strdup(auteur);
  nouv->suiv = NULL;

  return nouv;
}