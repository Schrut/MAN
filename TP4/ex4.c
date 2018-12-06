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
    int a=3, b=1,c=0;

    if((a > b))
        echange(&a,&b);
    if((a > c))
        echange(&a,&c);
    if (b > c)
        echange(&b,&c);

    printf(" %d < %d < %d\n",a,b,c);
        

    return 0;
}