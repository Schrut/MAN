#include <stdlib.h>
#include <stdio.h>

int main()
{   
    float a,b;
    
    printf ("Quel est le premier nombre ?\n");
    scanf("%f",&a);
    printf ("Quel est le deuxième nombre ?\n");
    scanf("%f",&b);

    if((a==0) || (b==0))
        printf("Produit nul\n");
    else
    {
        if (a>0)
            if(b>0)
                printf("Produit positif\n");
            else
                printf("Produit négatif\n");
        else
            if(b>0)
                printf("Produit négatif\n");
            else 
                printf("Produit positif\n");
    }


    return 0;
}