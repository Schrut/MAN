#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{   
    float A,B,R;
    int op, choix = 1;
    printf("Bienvenue sur le programme de calcul\n");
    //On boucle tant que l'utilisateur souhaite effectuer des calculs
    while (choix == 1)
    {
        //Entrée du premier nombre
        printf("Entrer un nombre\n");
        scanf("%f",&A);
        //Choix de l'opération
        printf("Quel opération souhaitez vous faire? (+-1 ou *-2)\n");
        scanf("%d",&op);
        //Si l'utilisateur à commis une erreur sur son choix on n'effectue pas le calcul
        if((op == 1) || (op == 2))
        {
            //Entrée du deuxième nombre
            printf("Entrer un deuxième nombre\n");
            scanf("%f",&B);
            //On calcul A * B ou A + B en fonction du choix de l'utilisateur et on affiche le résultat
            if (op == 1)  {R = A + B; printf ("%.3f + %.3f = %.3f\n",A,B,R); }
            else          {R = A * B; printf ("%.3f * %.3f = %.3f\n",A,B,R); }

        }
        //Si l'utilisateur s'est trompé on lui indique
        else printf("Erreur sur le choix..\n");
        //On demande si l'utilisateur souhaite continuer à utiliser le programme ou non
        printf("Souhaitez vous faire une autre opération? (1 = oui)\n");
        scanf("%d",&choix);
    }

    return 0;
}


