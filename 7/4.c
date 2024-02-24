/*
Да се дефинираат и имплементираат следните функции:

int obratenBroj (int broj) - функција која што прима еден аргумент broj и како резултат го враќа неговиот обратен број.
пример за бројот 1234, функцијата треба да врати резултат 4321.
int sumaNaCifri (int broj) - функција која што прима еден аргумент broj и како резултат ја враќа сумата на цифрите во тој број.
пример за бројот 1234, функцијата треба да врати резултат 10 (1+2+3+4 = 10).
void pecatiVoInterval (int a, int b) - функција што прима два аргументи a и b, но не враќа никаков резултат. Целта на ова функција е само да ги испечати сите броеви во интервалот од а до b (вклучувајќи ги и нив) за коишто важи дека збирот на бројот и неговиот обратен број е делев со сумата на цифрите на овој збир. Да се искористат првите две функции за имплементирање на оваа функција.
*/
#include <stdio.h>

int obratenBroj(int broj){
    int obraten=0;
    while(broj){
        int cifra=0;
        cifra=broj%10;
        obraten=obraten*10+cifra;
        broj/=10;
    }
    return obraten;
}

int sumaNaCifri(int broj){
    int suma=0;
    while(broj){
        int cifra=0;
        cifra=broj%10;
        suma+=cifra;
        broj/=10;
    }
    return suma;
}

void pecatiVoInterval(int a, int b){
    for(int i=a;i<=b;i++){
        if((i+obratenBroj(i))%(sumaNaCifri(i+obratenBroj(i)))==0){
            printf("%d\n", i);
        }
    }


}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    pecatiVoInterval(a, b);
}
