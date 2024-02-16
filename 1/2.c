/*
Да се напише програма која за дадена сума на пари, ќе испечати со колку најмалку банкноти и монети може да се исплати. На влез се чита еден цел број. На излез се печатат 9 редови, по колку банкноти или монети од секој апоен ни се потребни за да ја исплатиме сумата. Пример 1583 денари, најдобро е да се исплати како:

0*5000

1*1000

1*500

0*100

1*50

3*10

0*5

1*2

1*1

For example:

Input	Result
54321
        10*5000
        4*1000
        0*500
        3*100
        0*50
        2*10
        0*5
        0*2
        1*1*/

#include <stdio.h>
int main()
{
    int broj;
    scanf("%d", &broj);
    printf("%d*5000\n", broj/5000);
    broj=broj%5000;
    printf("%d*1000\n", broj/1000);
    broj=broj%1000;
    printf("%d*500\n", broj/500);
    broj=broj%500;
    printf("%d*100\n", broj/100);
    broj=broj%100;
    printf("%d*50\n", broj/50);
    broj=broj%50;
    printf("%d*10\n", broj/10);
    broj=broj%10;
    printf("%d*5\n", broj/5);
    broj=broj%5;
    printf("%d*2\n", broj/2);
    broj=broj%2;
    printf("%d*1\n", broj/1);
    broj=broj%1;

}