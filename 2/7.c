/*
Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник го има на својата трансакциска сметка. Потоа, во нов ред се внесуваат пет други износи оддвоени со празно место. Тие претставуваат некаква трансакција - одреден трошок или добивка на пари. Програмата печати 1 доколку после извршените трансакции корисникот сеуште има пари на својата сметка, а 0 во спротивно.

input: 25600
       10000 250 899 10 -45000
output: 0
For example:

Input	                Result
25600
10000 250 899 10 -45000
                            0
*/
#include <stdio.h>

int main ()
{
    int pari;
    scanf("%d", &pari);
    float t1, t2, t3, t4, t5;
    scanf("%f %f %f %f %f", &t1, &t2, &t3, &t4, &t5);
    float transakcii=t1+t2+t3+t4+t5;
    if(pari>=0 && transakcii>=0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}