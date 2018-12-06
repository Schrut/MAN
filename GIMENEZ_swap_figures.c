#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int swap_ (int x)
{
    int a,b,c,d;

    //Condition pour que notre programme soit fonctionnel
    if (x > 9999)
    {
        printf("Nombre trop grand!");
        return -1;
    }
    //Xmodulo10 nous donne le dernier nombre de X puis on divise par 10 et on réitère ainsi on récupère la centaine
    //puis les dizaines et etc.
    a = x%10;
    x = x/10;

    b = x%10;
    x = x/10;
    
    c = x%10;
    x = x/10;
    
    d = x%10;
  
    //On teste la longueur de notre nombre pour afficher notre nombres inversé
    if (d != 0)
        return (a*1000+b*100+c*10+d);
    else if ((c != 0) && (d == 0))
        return (a*100+b*10+c);
    else return (a*10 + b);
}

int main()
{   
    int x;

    printf("Entrer un entier à inverser\n");
    scanf("%d",&x);
    printf("x inverser est : %d\n",swap_(x));
    return 0;
}