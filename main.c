#include <stdio.h>
#include <stdlib.h>
#include "entree_sortie.h"
#include "LinkedList_biblio.h"

int main(int argc, char** argv){


  int ch;
  char* nomfic;


  int nlignes;
  LinkedList_biblio B;
  initialise_LinkedList_biblio(&B);

  if(argc != 3){
    printf("Erreur format : %s <NomFichierBiblio.txt> <NbLigneALire>\n", argv[0]);
    return 1;
  }

  nomfic = strdup(argv[1]);
  nlignes = atoi(argv[2]);

  printf("Lecture...\nnomfichier : %s , nlignes : %d\n", nomfic, nlignes);
  lecture_n_entree(nomfic, nblignes, &B);

  do{
    menu();

    scanf(" %d", &ch);
    switch(ch){
      case 1:
        break;
      case 2:
        break;
    }
  }while(ch != 0);


  printf("Au revoir!\n");
  return 0;
}
