/*
Да се напише функцијата matematickaOperacija (int a, int b, char operation, int rezultat) која што нема да враќа резултат. Целта на функцијата е врз основа на аргументот operation да изврши определена математичка операција, и резултатот од истата да го смести во rezultat. Возможни вредности за operation се:

+ (собирање)
- (разлика)
* (производ)
/ (делење)
% (остаток)
Да не се менува main функцијата, освен во делот каде е експлицитно назначено!

For example:

Input	Result
5 10
        5 + 10 -> 15
        5 - 10 -> -5
        5 * 10 -> 50
        5 / 10 -> 0
        5 % 10 -> 5
 */
#include<stdio.h>
#include<string.h>

void matematickaOperacija(int a, int b, char c, int *rezultat)
{
    if(c== '+'){
        *rezultat=a+b;
    }
    else if(c=='-'){
        *rezultat=a-b;
    }
    else if(c=='*'){
        *rezultat=a*b;
    }
    else if(c=='/'){
        *rezultat=a/b;
    }
    else if(c=='%'){
        *rezultat=a%b;
    }
}

int main () {

    int a,b,rezultat;

    scanf("%d %d", &a, &b);

    char * operacii = "+-*/%";

    int i;
    for (i=0;i<strlen(operacii);i++) {
        matematickaOperacija(a,b,operacii[i],&rezultat);
        printf("%d %c %d -> %d\n", a, operacii[i], b, rezultat);
    }

    return 0;
}