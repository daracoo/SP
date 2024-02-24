/*
Напишете целосно рекурзивна функција triagolnik(n) што за даден влезен аргумент n ќе испечати на екран превртен триаголник од броевите од 1 до n, како во примерот подолу. Дополнителни функции се дозволени, но истите мора да се рекурзивни. Не е дозволено користење на циклуси!

Пример за n=4:

1 2 3 4
1 2 3
1 2
1
For example:

Input	Result
3
        1 2 3
        1 2
        1
 */
#include <stdio.h>
#include <stdlib.h>

void row(int i, int n){
    if(i>n) return;
    printf("%d ",i);
    row(i+1, n);
}

void triangle(int n){
    if(n==0) return;
    row(1, n);
    printf("\n");
    triangle(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    triangle(n);
    return 0;
}