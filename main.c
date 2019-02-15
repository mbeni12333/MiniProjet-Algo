#include <stdio.h>
#include <stdlib.h>
#include "entree_sortie.h"
#include "LinkedList_biblio.h"


void menu(){

  printf("\t1-Lire n lignes fichier\n");
  printf("\t2-Afficher la liste\n");
  printf("\t3-Rechercher un ouvrage par son num\n");
  printf("\t4-Rechercher un ouvrage par son titre\n");
  printf("\t5-Rechercher un ouvrage par son auteur\n");
  printf("\t6-Inserer un nouvel ouvrage\n\n");
  printf("\tVeuillez choisir une option : ");
}

void run_tests(char* logFile){
  /*
    outputs a file containing n collumns 
    1- taille de l'entree
    2- temps de creation 
    3- moyenne(recherche par num alleatoire)
    4- moyenne(recherche par titre)
    5- moyenne(recherche par auteur)
    6- espace memoire
    

    for the purpous of the test, we will read the full doc
    then limit the list by a counter so that we don't read the whole 
    doc everytime
  
  */
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


  s_livre* tmp;
  nomfic = strdup(argv[1]);// on copie le nom du ficher
  nlignes = atoi(argv[2]);// on recupere le nb lignes voulu



  do{
    menu();// on afficher le menu
    scanf(" %d", &ch);// on lit le choix de l'utilisateur

    switch(ch){
      case 0:  printf("Au revoir!\n");
        break; 
      case 1:  printf("Lecture...\nnomfichier : %s , nlignes : %d\n", nomfic, nlignes);
               lecture_n_entree(nomfic, nlignes, B);// Lire n lignes
        break;
      case 2:  afficher_liste(B);// Affichage liste
        break;
      case 3:  ;
                 tmp= recherche_par_num(B, 4);
                if(tmp)
                  afficher_livre(tmp);
                 // Recherche par num
        break;
      case 4:  ;tmp = recherche_par_titre(B, "UKWAGM");
                if(tmp)
                  afficher_livre(tmp);// Recherche par titre
        break;
      case 5:  ;tmp = recherche_par_auteur(B, "gspqoqm");
                if(tmp)
                  afficher_livre(tmp);// Recherche par auteur
        break;
      case 6: //Insert_element(B);// Insertion element
      case 7: run_tests("LinkedList.log");// run tests
        break;
      default:
        printf("\nErreur: entrez un choix valide\n");
        break;
    }
    // tant qu'on entre quelque chose
  }while(ch != 0);





  return 0;
}
