/*
 * Да се напише програма која ќе прочита два природни броја. Програмата треба да провери дали сите цифри од првиот број се појавуваат во вториот број. Ако овој услов е исполнет, програмата печати DA, во спротивно NE.

For example:

Input	        Result
421988 4111992
                NE
 */
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    while(a)
    {
        int temp=b;
        int imaCifra=0;
        while(temp){
            if(a%10==temp%10){
                imaCifra=1;
                break;
            }
            temp/=10;
        }
        if(!imaCifra){
            printf("NE");
            return 0;
        }
        a/=10;
    }
    printf("DA");
    return 0;
}