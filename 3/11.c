/*
 * Да се напише програма во која од стандарден влез се чита мобилен број во следниот формат XXYYYZZZ (пр. 71298486). Програмата треба да го испечати во формат XXX/YYY-ZZZ (пр. 071/298-486). Дополнително, треба да го испечати и името на иницијалниот оператор:

070/071/072 - T-Mobile,
075/076/077/078 - А1.
079 - Lycamobile
For example:

Input	    Result
070120004
            070/120-004 T-mobile*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long mob;
    int prvi, vtori, treti;
    scanf("%ld", &mob);
    prvi=(mob/1000000)%1000;
    vtori=(mob/1000)%1000;
    treti=mob%1000;
    if(prvi==70 || prvi==71 || prvi==72)
    {
        printf("%03d/%03d-%03d T-mobile", prvi, vtori, treti);
    }
    if(prvi==75 || prvi==76 || prvi==77 || prvi==78)
    {
        printf("%03d/%03d-%03d A1", prvi, vtori, treti);
    }
    if(prvi==79)
    {
        printf("%03d/%03d-%03d LycaMobile", prvi, vtori, treti);
    }
}

