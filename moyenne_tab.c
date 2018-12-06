#include <stdio.h>
int main (void)
{
    int T[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int i, S=0;
    for ( i = 0; i < 10; ++i )
        T[i] = i*i;
    for ( i = 0; i < 10; ++i )
    {
        printf ("%i", T[i]);
        printf ("\n");
    }
    //Moyenne
    for ( i = 0; i < 10; ++i )
        S += T[i];
    printf ("La moyenne est : %f\n", S/10.);

    return 0;
}