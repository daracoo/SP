/*
Да се напише функција void sort (int x, int y, int z) која што ќе ги сортира во опаѓачки редослед трите броја, односно во x ќе биде сместен најголемиот број, а во z најмалиот.

Да не се менува main функцијата.

For example:

Input	Result
1 2 3
        3 2 1
 */
#include <stdio.h>
#include <stdlib.h>

void sort(int *x, int *y, int *z){
    int temp;
    if(*x<*y){
        temp=*x;
        *x=*y;
        *y=temp;
    }
    if(*x<*z){
        temp=*x;
        *x=*z;
        *z=temp;
    }
    if(*y<*z){
        temp=*y;
        *y=*z;
        *z=temp;
    }

}

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d", a, b, c);

    return 0;
}
