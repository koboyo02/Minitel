#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int info_general()
{
    system("cat /etc/issue\n");
    system("uptime\n");
    system("cat /proc/version\n");
    system("ulimit -n\n");
    system("lsof | wc -l\n");
    return 0;

}
