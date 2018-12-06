#include <stdlib.h>
#include <stdio.h>
int main()
{   
    float a,b;
    //On entre les deux nombres dont on veut connaître le signe du produit 
    printf ("Quel est le premier nombre ?\n");
    scanf("%f",&a);
    printf ("Quel est le deuxième nombre ?\n");
    scanf("%f",&b);

    //Traitement du cas particulier du produit nul
    if((a==0) || (b==0))
        printf("Produit nul\n");
    else
    {
        //Si A est positif le signe dépendra de b
        if (a>0)
            if(b>0)
                printf("Produit positif\n");
            else
                printf("Produit négatif\n");
        //Si A est négatif le signe dépend toujours de b mais les conditions sont inversée
        else
            if(b>0)
                printf("Produit négatif\n");
            else 
                printf("Produit positif\n");
    }
    return 0;
}

