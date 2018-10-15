#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{   
    float x;
    
    printf ("Entrer un réel pour calculer la valeur de f(x) ?\n");
    scanf("%f",&x);
    
    printf("f(%.3f) est : %.3f\n",x,3*pow(x,4)+2*pow(x,3)+pow(x,2)-x-2);


    return 0;
}