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
    int a=1, b=2,c=3;

    if((c > b) && (a < b))
        echange(&a,&c);
    else 
    if((b > c) && (c > a))
        echange(&b,&a);
    return 0;
}