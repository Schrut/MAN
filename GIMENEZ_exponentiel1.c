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
    }
    return R;
}

int main()
{   
    float x=1;
    int n;
    
    printf("Entrer une valeur de n pour la précision du calcul de e\n");
    scanf("%d",&n);

    printf("exp(%.3f) pour n = %d nous donne : %f\n",x,n,exp_approx(x,n));
    return 0;
}