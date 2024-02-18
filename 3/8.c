/*
 * Да се креира програма која што за вчитан датум од стандарден влез (во формат DD MM GGGG) ќе испечати на стандарден излез порака DA или NEво зависност од тоа дали внесениот датум е правилен или не.

При одредување на валидноста на датумот во предвид да се земат сите фактори:

дали месецот е број помеѓу 1 и 12
дали денот одговара со бројот на денови во тој месец
доколку е 29.02. да се внимава дали станува збор за престапна година
престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100.
For example:

Input	    Result
29 02 2140
            DA      */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int den, mesec, godina;
    scanf("%d %d %d", &den, &mesec, &godina);
    if(mesec>=1 && mesec<=12)
    {
        if((den>=1 && den<=31) && (mesec==1 || mesec==3 || mesec==5 || mesec==7 || mesec==8 || mesec==10 || mesec==12))
            printf("DA");
        else if ((den>=1 && den<=30) && (mesec==4 || mesec==6 || mesec==9 || mesec==11))
            printf("DA");
        else if ((den>=1 && den<=28) && (mesec==2))
            printf("DA");
        else if ((den==29 && mesec==2) && (godina%400==0 || godina%4==0 && godina%100!=0))
            printf("DA");
        else
            printf("NE");
    }
    else
    {
        printf("NE");
    }

    return 0;
}
