#include "stdio.h"

void echange(int* p1, int* p2)
{
    int *temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int tab[5] = {1, 2, 6, 0, 7};
    int tab2[5] = {1, 2, 6, 0, 7};
    int *p,*q;
    int *a,*b;
    int i;
    p = tab;
    q = tab;


    printf("Affichage du tableau initial : \n");
    for (i = 0 ; i < 5 ; i++)
    {
            printf("*p = %d\n",*q);
            q += 1;
    } 

    q -= 1;

   printf("Affichage du tableau ""retourné"" : \n");    
    for (i = 0 ; i < 5 ; i++)
    {

            a=*p;
            b=*q;
            echange(&a,&b);
            tab2[i] = a;
            q -= 1;
            p += 1;

        printf("*p = %d\n",tab2[i]); 
    }
    return 0;
}
