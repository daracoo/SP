/*
 * Од тастатура се чита еден непарен цел број n кој е поголем или еднаков на 5. Со помош на знакот * да се исцрта математичкиот симбол за бесконечност, кој би се добил како во примерот подолу, за n=5:

*   *
** **
* * *
** **
*   *
For example:

Input	Result
15
        *             *
        **           **
        * *         * *
        *  *       *  *
        *   *     *   *
        *    *   *    *
        *     * *     *
        *      *      *
        *     * *     *
        *    *   *    *
        *   *     *   *
        *  *       *  *
        * *         * *
        **           **
        *             **/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n>=5){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0 || j==n-1 || i==j || i+j==n-1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}