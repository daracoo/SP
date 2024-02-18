/*
 * Да се напише програма каде од тастатура се внесува еден седумцифрен број. Програмата печати DA доколку бројот е специјален, а NE во спротивно. Еден број е специјален доколку за него важи дека е делив со својата прва цифра и не е делив со збирот на последните две или доколку не е делив со својата втора цифра и не е делив со збирот на последните две. Да се внимава на делење со 0, т.е. да се испечати порака Nevaliden broj во таков случај.

For example:

Input	Result
1234567
        DA  */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sedum, prva, vtora, predposledna, posledna;
    scanf("%d", &sedum);
    prva=(sedum/1000000)%10;
    vtora=(sedum/100000)%10;
    predposledna=(sedum/10)%10;
    posledna=sedum%10;
    if(sedum>=1000000 && sedum<=9999999 && prva!=0 && vtora!=0 && posledna!=0)
    {

        if(sedum%prva==0 && sedum%(posledna+predposledna)!=0 || sedum%vtora!=0 && sedum%(posledna+predposledna)!=0)
        {
            printf("DA");
        }
        else
        {
            printf("NE");
        }
    }
    else
        printf("Nevaliden broj");
}