#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{   
int sec_init;
int sec,min,hour;

//On entre le nombre de secondes que l'on souhaite convertir
printf("Entrer le nombre de secondes à convertir \n");
scanf("%d",&sec_init);

//On calcule combien d'heure cela représente
hour    = sec_init/3600;
//On soustrait le nombre d'heure pour trouver le nombre de minutes qu'il reste à convertir
min     = (sec_init-(3600*hour))/60;
//Enfin on soustrait le nombre de minutes et d'heure pour obtenir les secondes restantent
sec     = sec_init-((60*min)+(3600*hour));
//On affiche le résultat sous la format HH:MM:SS
printf("%d:%d:%d\n",hour,min,sec);

return 0;
}


