#include "stdio.h"

void echange(int* p1, int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a=1, b=2;
    printf("a = %d, b = %d\n",a,b);
    printf("Appelle de la fonction échange..\n");
    echange(&a,&b);
    printf("a = %d, b = %d\n",a,b);
    return 0;
}

