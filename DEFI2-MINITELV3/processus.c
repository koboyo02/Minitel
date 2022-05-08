#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>

int processus()
{
    int tuer;
    system("ps -ef");
    printf("Si vous voulez tuer le processus tapez : 1 pour tuer et 2 pour forcer");
    scanf("%d", &tuer);
    if(tuer == 1)
        {
            system("kill");
        }
    else if(tuer == 2){
        system("kill -9");
    }
    return 0;
}
