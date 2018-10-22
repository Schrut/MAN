#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double f_x (float x)
{
    if (x > 2)
        return 100;
    else if ( x > 1) 
        return exp(x);
    else if ( x > 0)
        return sin(x);
    else return pow(x,2);
}

int main()
{   
    float x;
    int choix = 1;
    do
    {
    printf("Entrer un réel pour obtenir f(x)\n");
    scanf("%f",&x);
    printf("Pour x = %.3f on a f(%.3f) = %.3f\n",x,x,f_x(x));
    printf("Entrer 1 pour continuer\n");
    scanf("%d",&choix);
    } while(choix == 1);
    return 0;
}