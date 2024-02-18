/*За даден број, проверете дали е 7-цифрен и ако е, испечате ги во посебен ред секој од неговите цифри почнувајќи од првата, а потоа повторно во посебен ред нивната сума и производ.

Ако бројот не е 7 цифрен само испечатете "Vneseniot broj ne e 7 cifren!".

For example:

Input	Result
1000000
            1
            0
            0
            0
            0
            0
            0
            1
0*/
#include <stdio.h>
int main()
{
    int broj;
    scanf("%d", &broj);
    if(broj>=1000000 && broj<=9999999){

        int c1=(broj/1000000)%10;
        printf("%d\n", c1);
        int c2=(broj/100000)%10;
        printf("%d\n", c2);
        int c3=(broj/10000)%10;
        printf("%d\n", c3);
        int c4=(broj/1000)%10;
        printf("%d\n", c4);
        int c5=(broj/100)%10;
        printf("%d\n", c5);
        int c6=(broj/10)%10;
        printf("%d\n", c6);
        int c7=broj%10;
        printf("%d\n", c7);
        int suma=c1+c2+c3+c4+c5+c6+c7;
        int proizvod=c1*c2*c3*c4*c5*c6*c7;
        printf("%d\n", suma);
        printf("%d\n", proizvod);
    }
    else {
        printf("Vneseniot broj ne e 7 cifren!");
    }
}