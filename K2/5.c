/*
Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.

На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).

Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:

ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

For example:

Input	    Result
100
ab12 1 1.2
c234 2 2.0
#
            c234 2 2.00
            240.00
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wf();

    FILE *f=fopen("livce.txt", "r");

    int sumaNaUplata;
    fscanf(f, "%d", &sumaNaUplata);

    char sifra[10], maxsifra[10];
    int tip, maxTip;

    double koeficient, maxKoeficient;
    double moznaDobivka=1;

    while((fscanf(f, "%s %d %lf", sifra, &tip, &koeficient)!=EOF)){
        moznaDobivka*=koeficient;
        if(koeficient>maxKoeficient){
            strcpy(maxsifra, sifra);
            maxTip=tip;
            maxKoeficient=koeficient;
        }
    }
    fclose(f);
    printf("%s %d %.2lf\n%.2lf", maxsifra, maxTip, maxKoeficient, moznaDobivka*sumaNaUplata);
    return 0;

}