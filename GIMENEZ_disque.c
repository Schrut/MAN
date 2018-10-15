#include <stdlib.h>
#include <stdio.h>

int main()
{   
    int D;
    float pi = 3.14;

    printf ("Quel est le diamètre du disque ?\n");
    scanf("%d",&D);
    printf("La surface d'un cercle de rayon %d est : %.3f\n",D,(pi*D*D)/4); 
    return 0;
}