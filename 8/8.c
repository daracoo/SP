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

void linija(int i, int n){
    if(i==n) return;
    else{
        printf("%d ",i++);
        linija(i,n);
    }
}

void triagolnik(int n){
    if(n==0) return;
    else{
        linija(1,n+1);    //for(int i=1;i<=n;i++) printf("%d ",i); - so ciklus
        printf("\n");
        triagolnik(n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    triagolnik(n);
    return 0;
}