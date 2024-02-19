/*
 * Од влез се внесува цел позитивен број n, така што n > 2. Со помош на ѕвездички, да се исцрта полн правоаголен триаголник со висина и ширина n, како во примерот:

За n=5

*
**
***
****
*****
For example:

Input	Result
3
            *
            **
            ***
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<2){
        printf("Nevaliden vlez");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}