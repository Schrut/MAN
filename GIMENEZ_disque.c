#include <stdlib.h>
#include <stdio.h>

int main()
{   
    int D;
    float pi = 3.14;

    printf ("Quel est le diamètre du disque ?\n");
    //D prend la valeur qu'entre l'utilisateur
    scanf("%d",&D);
    //On a : Aire = 2*pi*R². On effecture directement le calcul dans le printf pour faire l'économie d'une variable
    printf("La surface d'un cercle de rayon %d est : %.3f\n",D,(pi*D*D)/4); 
    return 0;
}

