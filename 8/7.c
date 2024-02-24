/*
Дефинирајте ја рекурзивната функција "sumOfDigits(int number)" така што за дадениот аргумент "number" ќе ја пресмета сумата на сите негови цифри. Пример за аргумент "1234" функцијата треба да врати 1 + 2 + 3 + 4 = 10.

Не правете промени во дадената main функција, само дефинирајте ја рекурзивната функција.

For example:

Input	    Result
1
1234567890
            45
            45
 */
#include <stdio.h>

int sumOfDigits(int number){
    if(number<10) return number;
    else return number%10+sumOfDigits(number/10);
}

int main(){
    int n,i;
    scanf("%d",&n);
    int sum=0;
    for(i=0;i<n;++i){
        int current;
        scanf("%d",&current);
        sum+= sumOfDigits(current);
        printf("%d\n", sumOfDigits(current));
    }
    printf("%d",sum);
    return 0;
}