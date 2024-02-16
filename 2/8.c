/*
Да се напише програма која што од стандарден влез ќе вчитува 3 знаци и истите ќе ги шифрира во две секвенции од бинарни броеви (1/0) со должина 3.

Шифрирањето треба да се одвива на следниот начин:

    во првата бинарна секвенца, за секој еден знак да се испечати 0 доколку знакот е некој специјален знак, а 1 во спротивно.
    во втората бинарна секвенца, за секој еден знак да се испечати 0 доколку знакот е буква, а 1 во спротивно.
Пример: Влез:

/ * 1

Излез:

001
111

For example:

Input	Result
{A}
        010
        101
 */

#include <stdio.h>
#include <ctype.h>
int main()
{
    char c1, c2, c3;
    scanf("%c %c %c", &c1, &c2, &c3);
    if(!isalnum(c1)){
        printf("0");
    }else{
        printf("1");
    }
    if(!isalnum(c2)){
        printf("0");
    }else{
        printf("1");
    }
    if(!isalnum(c3)){
        printf("0");
    }else{
        printf("1");
    }
    printf("\n");
    if(isalpha(c1)){
        printf("0");
    }else{
        printf("1");
    }
    if(isalpha(c2)){
        printf("0");
    }else{
        printf("1");
    }
    if(isalpha(c3)){
        printf("0");
    }else{
        printf("1");
    }
    return 0;
}