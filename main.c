#include <stdio.h>
#include <stdlib.h>
#include "entree_sortie.h"
#include "LinkedList_biblio.h"
#include "structs.h"

void menu(){
  printf("Veuillez choisir une option : \n");
  printf("\t1-Lire n lignes fichier\n");
  printf("\t2-Afficher la liste\n");
  printf("\t3-Rechercher un ouvrage par son num\n");
  printf("\t4-Rechercher un ouvrage par son titre\n");
  printf("\t5-Rechercher un ouvrage par son auteur\n");
  printf("\t6-Inserer un nouvel ouvrage\n");
}


int main(int argc, char** argv){
  /*
    argc contient le nombre de parametres
    argv contient un tableau de parametres 
  */

  int ch;// pour contenir le choix de l'utilisateur
  char* nomfic;// le nom du fichier de livres


  int nlignes;// nombre de lignes 
  LinkedList_biblio* B = initialise_biblio();


  // si le format d'appel du programme est faux on sort
  if(argc != 3){
    printf("Erreur format : %s <NomFichierBiblio.txt> <NbLigneALire>\n", argv[0]);
    return 1;
  }



  nomfic = strdup(argv[1]);// on copie le nom du ficher
  nlignes = atoi(argv[2]);// on recupere le nb lignes voulu

  printf("Lecture...\nnomfichier : %s , nlignes : %d\n", nomfic, nlignes);
  lecture_n_entree(nomfic, nlignes, B);

  do{
    menu();// on afficher le menu
    scanf(" %d", &ch);// on lit le choix de l'utilisateur

    switch(ch){
      case 1:// Lire n lignes
        break;
      case 2:// Affichage liste
        break;
      case 3:// Recherche par num
        break;
      case 4:// Recherche par titre
        break;
      case 5:// Recherche par auteur
        break;
      case 6:// Insertion element
        break;
      default:
        printf("\nErreur: entrez un choix valide\n");
        break;
    }
    // tant qu'on entre quelque chose
  }while(ch != 0);


  printf("Au revoir!\n");
  return 0;
}
