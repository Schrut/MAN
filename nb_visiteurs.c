#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main()
{   
    int nb_entrees = 30;
    int recette_obj = 50;
    int t_retraite = 2;
    int t_enfant = 1;
    int t_adulte = 3;

    int nb_adultes=0, nb_enfants=0, nb_retraites=0;
    int recette=0, nb_visiteur=0;

    printf("Nous remplissons les conditions pour les combinaisons suivante :\n\n");
    //On teste chaque combinaisons possible
    for (nb_enfants = 0; nb_enfants < 30 ; nb_enfants++)
        for(nb_retraites = 0; nb_retraites < 30; nb_retraites++)
            for(nb_adultes = 0; nb_adultes < 30 ; nb_adultes++)
            {
                nb_visiteur = nb_adultes + nb_retraites + nb_enfants;
                recette = t_adulte * nb_adultes + t_retraite * nb_retraites + t_enfant * nb_enfants;
                if((nb_visiteur = nb_entrees) && (recette == recette_obj))
                {
                    printf("---------------------\\\\\n");
                    printf("Nombre d'adultes : %d, Nombre de retraités : %d, Nombre d'enfants : %d\\\\\n",nb_adultes
                                    ,nb_retraites,nb_enfants);
                }
            }



    return 0;
}
