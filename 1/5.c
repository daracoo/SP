/*
Да се напише програма коjа за даден цел броj секунди коj се чита од стандарден влез, ќе ги отпечати на екран соодветните вредности во часови, минути и секунди.

For example:

Input	Result
54321
        54321 sekundi se 15 casovi, 5 minuti i 21 sekundi
*/
#include <stdio.h>
int main()
{
    int sekundi, secundi, casovi, minuti;
    scanf ("%d", &sekundi);
    casovi=sekundi/3600;
    minuti=(sekundi-(casovi*3600))/60;
    secundi=(sekundi-(casovi*3600)-(minuti*60));
    printf("%d sekundi se %d casovi, %d minuti i %d sekundi", sekundi, casovi, minuti, secundi);

    return 0;
}