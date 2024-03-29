/*
 * Да се напише рекурзивна функција која што прима еден аргумент - број x која што ќе враќа 1 доколку секоја цифра во бројот е поголема од претходната, а во спротивно0.

Пример бројот 12345 е растечки, додека пак бројот 12325 не е растечки број.

Од стандарден влез се вчитува прво број N, а потоа N броеви. За секој број да се испечати порака DA или NE (во нов ред), доколку бројот е растечки или не е растечки.*/


#include <stdio.h>

int rasteckiBroj(int broj){
    if(broj<10) return 1;
    else {
        if(broj%10>broj/10%10 == rasteckiBroj(broj/10)) return broj%10>broj/10%10;
        else return 0;
    }
}

int main(){
    int n,broj;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&broj);
        if(rasteckiBroj(broj)) printf("DA\n");
        else printf("NE\n");
    }
    return 0;
}