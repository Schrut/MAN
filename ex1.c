#include <stdio.h>
int main (void)
{
    int T[4][5];
    int c,l,a,min,max,choix=1;

    for ( l = 0; l < 4; ++l )
        for ( c = 0; c < 5; ++c )
        {
            printf("Entrer la valeur pour la case [%d][%d] : ",l,c);
            scanf("%d",&a);
            T[l][c] = a;
        }
    
    for ( l = 0; l < 4; ++l )
    {
        for ( c = 0; c < 5; ++c )
        {
            printf("%d  ",T[l][c]);
        }
        printf("\n");
    }

    //Initialisation de Min et Max
    min = T[0][0];
    max = T[0][0];

    for ( l = 0; l < 4; ++l )
        for ( c = 0; c < 5; ++c )
        {
            if (T[l][c] < min) min = T[l][c];
            if (T[l][c] > max) max = T[l][c];
        }

    printf("Le Max de la matrice est : %d\n Le Min de la matrice est : %d\n",max,min); 

    while (choix)
    {
        printf("Choix de la ligne : \n");
        scanf("%d",&l);
        printf("Choix de la colonne : \n");
        scanf("%d",&c);
        printf("La valeur de pour la ligne %d et la colonne %d est : %d\n\n",l,c,T[l][c]);
        printf("Voulez vous trouver une autre valeur? oui-non (1-0)\n");
        scanf("%d",&choix);
    }

    return 0;
}