/*
 Од стандарден влез се читаат броевите N и k, потоа се внесуваат N елементи во низа. Ваша задача е да ја испечатите низата и да испечатите колку пати во низата се појавува k.

Напомена: Печатењето на елементите во низата да биде во функција.

For example:

Input	    Result
5 678
12
678
11
53
325
            12 678 11 53 325
            Brojot 678 vo nizata se naogja 1 pati.
 */
#include <stdio.h>
#include <stdlib.h>

void printArray(int array[100], int n){
    for(int i=0;i<n;i++){
        printf("%d ", array[i]);
    }
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int array[100];

    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }

    printArray(array, n);
    printf("\n");
    int br=0;
    for(int i=0;i<n;i++){
        if(k==array[i]){
            br++;
        }
    }
    printf("Brojot %d vo nizata se naogja %d pati.", k, br);
    return 0;
}