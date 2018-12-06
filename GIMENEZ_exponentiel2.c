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

int estim_n()
{
    int i=0;
    double est;
    do
    {
        //On incrémente i jusqu'à que la première conditions soit vérifié
        i++;
        est = 1./factorielle(i);
    }while ( est > 0.0001 );

    //On teste si la deuxième condition est vérifié
    if ( (1./factorielle(i-1)) > 0.0001)
        return i;
    
    //Si la condition n'est pas vérifié on renvoit une erreur
    else 
    {
        printf("!Erreur Condition!");
        return -1;
    }
}

double exp_approx (float x, int n)
{
    double R;
    int i;
    R = 1.0;
    for (i=1 ; i < n ; i++)
    {
        R = R + 1.0/factorielle(i);
    }
    return R;
}

int main()
{   
    float x=1;
    int n;
    n = estim_n();
    
    printf("n qui vérifie la condition est : %d\n",n);
    printf("exp(%.3f) pour n = %d nous donne : %f\n",x,n,exp_approx(x,n));
    return 0;
}