#include <stdio.h>
int main (void)
{
    int T[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int i, S=0,min,max;

    //T[i] = i²
    for ( i = 0; i < 10; ++i )
        T[i] = i*i;

    //Affichage du tableau
    for ( i = 0; i < 10; ++i )
    {
        printf ("%i", T[i]);
        printf ("\n");
    }
    //Moyenne
    for ( i = 0; i < 10; ++i )
        S += T[i];
    printf ("La moyenne est : %.1f\n", S/10.);

    //On initialise les deux variables avec les deux valeurs qui se trouvent au début du talbeau
    min = T[0];
    max = T[0];
    //Min et Max
    for ( i = 0; i < 10; ++i )
    {
        if (T[i] < min) min = T[i];
        if (T[i] > max) max = T[i];
    }
    printf("Le Max de ce tableau est : %d\n Le Min de ce tableau est : %d\n",max,min); 
    return 0;
}