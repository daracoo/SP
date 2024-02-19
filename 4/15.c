/*
 * Од влез се внесува цел позитивен број n, така што n > 2. Со помош на ѕвездички, да се исцрта рефлектиран празен правоаголен триаголник со висина и ширина n, како во примерот:

За n=5

    *
   **
  * *
 *  *
*****
For example:

Input	Result
7
              *
             **
            * *
           *  *
          *   *
         *    *
        *******
 * */
#include <stdio.h>

int main()
{
    int i, j, rows;

    scanf("%d", &rows);
    if(rows<2){
        printf("Nevaliden vlez");
        return 0;

    }

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            if(i==rows || j==1 || j==i)
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