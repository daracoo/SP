/*
Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата и десната половина од стрингот ќе си ги сменат местата.

Напомена: Сите тест примери ќе имаат парен број на знаци.

For example:

Input	    Result
Stefan
            fanSte
Strukturno
            turnoStruk
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char niza[100];
    fgets(niza, sizeof(niza), stdin);
    niza[strlen(niza)-1]='\0';
    int n=strlen(niza);
    for(int i=n/2;i<n;i++){
        printf("%c", niza[i]);
    }
    for(int i=0;i<n/2;i++){
        printf("%c", niza[i]);
    }
}