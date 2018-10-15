#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{   
    float A,B,R;
    int op, choix;

    printf("Souhaitez vous effectuer un calcul?(1 = oui)\n");
    scanf("%d",&choix);
    while (choix == 1)
    {
        printf("Entrer un nombre\n");
        scanf("%f",&A);

        printf("Quel opération souhaitez vous faire? (+-1 ou *-2)\n");
        scanf("%d",&op);
        
        printf("Entrer un deuxième nombre\n");
        scanf("%f",&B);

        if((op == 1) || (op == 2))
        {
            if (op == 1)  {R = A + B; printf ("%.3f + %.3f = %.3f\n",A,B,R); }
            else          {R = A * B; printf ("%.3f * %.3f = %.3f\n",A,B,R); }


            
        }
        else printf("Erreur sur le choix..\n");
        printf("Souhaitez vous faire une autre opération? (1 = oui)\n");
        scanf("%d",&choix);
    }

    return 0;
}