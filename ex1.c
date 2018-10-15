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

double exp_approx (float x, int n)
{
    double R;
    int i;
    R = 1.0;
    for (i=1; i <= n; i++)
    {
        R = R + 1.0/factorielle(i);
        printf("%f\n",R);
    }
    return R;
}

int main()
{   
    float x;
    int n;
    printf("Entrer une valeur de x pour calculer l'exp(x)\n");
    scanf("%f",&x);
    printf("Entrer une valeur de n pour la précision\n");
    scanf("%d",&n);

    printf("exp(%.3f) pour n = %d nous donne : %.3f\n",x,n,exp_approx(x,n));
    return 0;
}