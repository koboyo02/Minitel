#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Parcours_Utilisateur.h"
#include "info_general.h"
#include "processus.h"

int choix_menu(){
    int choix;
    char reponse;

    printf(">>>>>>Faites le choix de votre menu : >>>>>>");
    printf("\n");
    scanf("%d", &choix);
    printf("\n");
    if(choix) {
        if(choix == 1){
            info_general();
            printf("\n");
            printf("---------------------------------");
            printf("\n");
            printf("Vouslez-vous continuer ? y or n ?");
            scanf("%s", &reponse);
            if(reponse == 'y'){
                choix_menu();
            } else {
                printf("Bye !\n");
            }

        }
        else if(choix == 2) {
            Parcours_Utilisateur();
            printf("\n");
            printf("---------------------------------");
            printf("\n");
            printf("Vouslez-vous continuer ? y or n ?");
            scanf("%s", &reponse);
            if(reponse == 'y'){
                choix_menu();
            } else {
                printf("Bye !\n");
            }
            
        }
        else if(choix == 3) {
            processus();
            printf("\n");
            printf("---------------------------------");
            printf("\n");
            printf("Vouslez-vous continuer ? y or n ?");
            scanf("%s", &reponse);
            if(reponse == 'y'){
                choix_menu();
            } else {
                printf("Bye !\n");
            }

        }
        else if (choix != 1 || choix != 2 || choix != 3){
            printf("Veuillez saisir entre 1 et 3");
            printf("\n");
            printf("---------------------------------");
            printf("\n");
            printf("Vouslez-vous continuer ? y or n ?");
            scanf("%s", &reponse);
            if(reponse == 'y'){
                choix_menu();
            } else {
                printf("Bye !\n");
            }

        }
        //printf("\n");
        //printf("---------------------------------");
        //printf("\n");
        //printf("Vouslez-vous continuer ? yes or no ?");
        //scanf("%s", &reponse);
        //else  if(strcmp(reponse, "yes")){
        //choix_menu();
        //} else {
        //printf("Bye !\n");
        //}

    }
    return choix;

}
