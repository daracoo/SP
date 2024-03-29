/*Да се напише рекурзивна функција за наоѓање на НЗД на два броја а и b, каде a > b. Потсетник: За наоѓање на НЗД може да се користи Евклидовиот алгоритам.

For example:

Input	    Result
1071 462
            21
 */
#include <stdio.h>

int nzd(int a,int b){
    if (a==0) return b;
    else return nzd(b % a, a);
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",nzd(a,b));
    return 0;
}