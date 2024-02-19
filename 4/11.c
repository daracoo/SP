/*
 * Од влез се внесува цел позитивен број n, така што n > 2. Со помош на ѕвездички, да се исцрта празен правоаголен триаголник со висина и ширина n, како во примерот:

За n=5

*
**
* *
*  *
*****
For example:

Input	Result
0
        Nevaliden vlez
 */
#include <stdio.h>

int main()
{
    int i, j, n;

    scanf("%d", &n);
    if(n<2){
        printf("Nevaliden vlez");
        return 0;

    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==n)
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

    return 0;
}