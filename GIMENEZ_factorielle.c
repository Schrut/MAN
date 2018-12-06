#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int factorielle (int n)
{
    int i, R;
    //On initialise la variable résultat à 1 qui l'élément neutre du produit
    R = 1;
    for (i=2; i <= n; i++)
        R = R * i;
    return R;
}

int main()
{   
    int i, max;
    max = 10;

    for (i = 0; i <= max; i++)
    {
        printf("Le resultat de %d! = %d\n",i,factorielle(i));
    }

    return 0;
}
