#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main()
{   
    int nb_entrees = 30;
    int recette = 50;
    int t_retraite = 2;
    int t_enfant = 1;
    int t_adulte = 3;

    int nb_adultes=0, nb_enfants=0, nb_retraites=0;
    int recettes_eval=0, nb_perso_eval=0;


    //Hypothèse une majorité d'adultes
    while (recettes_eval+3 < recette)
        {
        nb_adultes++;
        recettes_eval+=3;
        }
    
    while (recettes_eval+2 < recette)
        {
        nb_retraites++;
        recettes_eval+=2;
        }

    while (recettes_eval+1 < recette)
        {
        nb_enfants++;
        recettes_eval+=2;
        }

        printf("Nombre d'adultes : %d, Nombre de retraités : %d, Nombre d'enfants : %d\n",nb_adultes,nb_retraites,nb_enfants);
        printf("Nombre de personnes : %d, recette : %d \n",nb_adultes+nb_retraites+nb_enfants,recettes_eval);



    return 0;
}