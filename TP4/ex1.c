#include "stdio.h"
int main()
{
    int tab[5] = {1, 2, 6, 0, 7};
    int *p;
    int i;
    p = tab;
    printf("*p = %d\n",*p);
    p += 1;
    printf("*p = %d\n",*p);

    p = tab;

    //Affichage par ordre croissant
    printf("Affichage par ordre croissant d'indices : \n");
    for (i = 0 ; i < 5 ; i++)
    {
            printf("*p = %d\n",*p);
            p += 1;
    }


    //Affichage par ordre décroissant
    printf("Affichage par ordre décroissant d'indices : \n");
    for (i =4  ; i >= 0 ; i--)
    {
            p -= 1;
            printf("*p = %d\n",*p);
            
    }

    return 0;
}