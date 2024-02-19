/*
 * Од влез се внесува цел позитивен број n, така што n > 2. Со помош на ѕвездички, да се исцрта превртен празен правоаголен триаголник со висина и ширина n, како во примерот:

За n=5

*****
*  *
* *
**
*
For example:

Input	Result
3
        ***
        **
        *
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n<2){
        printf("Nevaliden vlez");
        return 0;
    }
    for(i=1; i<=n; i++)
    {

        for(j=i; j<=n; j++)
        {
            if(i==1 || j==i || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}