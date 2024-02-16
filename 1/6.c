#include <stdio.h>
/*
Да се прочитаат два цели броеви од тастатура и на екран да се испечатат нивните сума и производ.

For example:

Input	Result
5 6
        11
        30
*/

int main()
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n",n1+n2);
    printf("%d",n1*n2);
    return 0;
}
