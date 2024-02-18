/*
 * Да се напише програма која за петцифрен број прочитан од стандарден влез ќе проверува дали е палиндром. Ако бројот е палиндром, на екран треба да се испечати пораката "Palindrom", а во спротивно - "Ne e palindrom". Доколку внесениот број не е петцифрен треба да се испечати пораката "Nevaliden vlez".

For example:

Input	Result
44444
        Palindrom*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, broj;
    scanf("%d", &n);
    broj=n;
    if (n>10000 && n<99999)
    {
        int prevrten=0;
        while(n>0)
        {
            prevrten=prevrten*10+n%10;
            n/=10;
        }
        if(broj==prevrten)
        {
            printf("Palindrom");
        }
        else
            printf("Ne e palindrom");
    }
    else
        printf("Nevaliden vlez");
}