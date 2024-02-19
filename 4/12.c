/*
 * Од влез се внесува цел позитивен број n, така што n > 2. Со помош на ѕвездички, да се исцрта превртен полн правоаголен триаголник со висина и ширина n, како во примерот:

За n=5

*****
****
***
**
*
For example:

Input	Result
7
        *******
        ******
        *****
        ****
        ***
        **
        *
*/
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j<=n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}