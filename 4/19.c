/*
 * Од стандарден влез се внесува даден број X,  а потоа се внесуваат броеви додека не се внесе нешто различно од број. За секој од броевите да се провери дали неговиот број на цифри е еднаков со бројот на цифри на Х, и доколку условот е исполнет, да се испечати.

For example:

Input	Result
1234
453
3745
123
6
6850
a
        3745
        6850*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, br1=0, br2=0;
    int pomosna, pomosna2;
    scanf("%d",&x);
    pomosna=x;
    while(pomosna){
        pomosna/=10;
        br1++;
    }
    int n;
    while(scanf("%d", &n))
    {
        pomosna2=n;
        while(pomosna2){
            pomosna2/=10;
            br2++;
        }
        if(br2==br1)
        {
            printf("%d\n", n);
        }
        br2=0;
    }
}