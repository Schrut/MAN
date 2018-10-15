#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int factorielle (int n)
{
    int i, R;
    R = 1;
    for (i=2; i <= n; i++)
        R = R * i;
    return R;
}

int main()
{   
    /*int N;
    printf("Entrer un entier pour calculer sa factorielle\n");
    scanf("%d",&N);
    printf("La factorielle de %d est %d! = %d\n",N,N,factorielle(N));*/

    int i, max;
    max = 10;

    for (i = 0; i <= max; i++)
    {
        printf("Le resultat de %d! = %d\n",i,factorielle(i));
    }

    return 0;
}