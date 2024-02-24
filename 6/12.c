/*
Од стандарден влез да се вчита број N и потоа да се вчитаат N елементи во една низа.

Внесената низа да се трансформира на начин што парните елементи ќе се зголемат за 1, а непарните ќе се намалат за 1.

Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив.

For example:

Input	    Result
5
1 2 3 4 5
            0 3 2 5 4 */
#include <stdio.h>

int main()
{
    int array[100];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            array[i]+=1;
        }
        else{
            array[i]-=1;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ", array[i]);
    }
}