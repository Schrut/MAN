#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{   
    float x;
    //Saisi d'une valeur à donner à la variable pour déterminer f(x)
    printf ("Entrer un réel pour calculer la valeur de f(x) ?\n");
    scanf("%f",&x);
    //On calcul f(x) directement dans le printf, et on affiche une précision de 3 chiffres
    //après la virgule
    printf("f(%.3f) est : %.3f\n",x,3*pow(x,4)+2*pow(x,3)+pow(x,2)-x-2);


    return 0;
}

