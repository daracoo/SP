/*
 * Од стандарден влез се чита број N, а потоа низа на N цели броеви. Да се дефинира функција int isInteresting(int number) која што ќе врати 1 доколку е интересен број, односно доколку цифрите на бројот се парна-непарна цифра, наизменично. Во спротивно враќа 0. Да се дефинира функција void printArray(int numbers[], int n) која што ќе ги испринта сите броеви во низата кои што се интересни.

Пример интересни броеви: 1634, 678, 141858

За се освојат сите поени од вежбата, потребно е функцијата printArray да биде рекурзивна.


For example:

Input	Result
5
123
6789
111
5325
325
        325
        6789
        123
 */
#include <stdio.h>
#include <stdlib.h>
int isInteresting(int number){
    int flag=1;
    int posledna, pretposledna;
    while(number>9){
        posledna=number%10;
        pretposledna=number/10%10;
        if((posledna%2==1 && pretposledna%2==0)||(posledna%2==0 && pretposledna%2==1)){
            number/=10;
        }
        else{
            flag=0;
            break;
        }
    }
    return flag;
}

void printArray(int numbers[100], int n){
    if(n<0){
        return;
    }
    else{
        printf("%d\n", numbers[n]);
        printArray(numbers, n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int broj, niza[100], j=0;
    for(int i=0;i<n;i++){
        scanf("%d", &broj);
        if(isInteresting(broj)){
            niza[j]=broj;
            j++;
        }
    }
    printArray(niza, j-1);
}