/*
Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

For example:

Input	Result
10
        8
 */
#include <stdio.h>

int reverse(int n)
{
    int k = 0;
    while (n != 0)
    {
        k *= 10;
        k += n % 10;
        n /= 10;
    }
    return k;
}

int digits(int n)
{
    int k = 0;
    while (n != 0)
    {
        n /= 10;
        k++;
    }
    return k;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 10)
    {
        printf("Brojot ne e validen");
        return 0;
    }

    for (int i = n - 1; i > 0; i--)
        if (reverse(i) % digits(i) == 0)
        {
            printf("%d", i);
            break;
        }
    return 0;
}