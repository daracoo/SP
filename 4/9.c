/*
 * Од тастатура се чита еден непарен цел број n кој е поголем или еднаков на 5. Со помош на знакот * да се исцрта песочен часовник, кој има основи со должина n, како што е во примерот подолу, за n=5:

*****
 * *
  *
 * *
*****
For example:

Input	Result
9
        *********
         *     *
          *   *
           * *
            *
           * *
          *   *
         *     *
        *********
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0 && n<5){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1||i==j||i+j==n-1){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}