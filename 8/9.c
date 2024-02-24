/*
 * Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран триаголник од броевите од 1 до n. Дополнителни функции се дозволени, но истите мора да се исто така рекурзивни. Не е дозволено користење на циклуси!

Пример за n=4.

    1
    12
    123
    1234
For example:

Input	Result
8
        1
        12
        123
        1234
        12345
        123456
        1234567
        12345678
 */
#include <stdio.h>
#include <stdlib.h>

void linija(int i,int n){
    if(i==n) return;
    else{
        printf("%d",++i);
        linija(i,n);
    }
}

void triagolnik(int i,int n){
    if(i==n) return;
    else{
        linija(0,++i);
        printf("\n");
        triagolnik(i,n);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    triagolnik(0,n);
    return 0;
}
