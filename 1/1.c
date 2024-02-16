// Да се напише програма која ќе ги изведува основните математички операции (+, -, *, /, %) врз два броја кои се читаат од стандарден влез.
/*
Input	Result
24 5
        a + b = 29
        a - b = 19
        a * b = 120
        a / b = 4
        a % b = 4
*/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n",  a - b);
    printf("a * b = %d\n",  a * b);
    printf("a / b = %d\n",  a / b);
    printf("a %% b = %d\n", a % b);

    return 0;
}