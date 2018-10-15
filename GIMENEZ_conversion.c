#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{   
    int sec_init;
    int sec,min,hour;

    printf("Entrer le nombre de secondes à convertir \n");
    scanf("%d",&sec_init);
    hour    = sec_init/3600;
    min     = (sec_init-(3600*hour))/60;
    sec     = sec_init-((60*min)+(3600*hour));
    printf("%d:%d:%d",hour,min,sec);


    return 0;
}