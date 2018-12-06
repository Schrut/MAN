#include <stdio.h>
int main (void)
{
    int T[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int i,S;
    for ( i = 0; i < 10; ++i )
        T[i] = i*i;
    for ( i = 0; i < 10; ++i )
        {printf ("%i", T[i]);
        printf ("\n");}
    return 0;
}