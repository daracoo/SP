/*
Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

Задачата да се реши без употреба на низи и матрици.

For example:

Input	Result
88 7
        86
 */
#include <stdio.h>

int numbers(int a, int b)
{
    int x = b;
    while (a != 0)
    {
        while (b != 0)
        {
            if (a % 10 == b % 10)
                return 0;
            b /= 10;
        }
        a /= 10;
        b = x;
    }
    return 1;
}

int main()
{
    int n, x;
    scanf("%d%d", &n, &x);
    n--;

    while (1)
    {
        if (numbers(n, x) == 0)
            n--;
        else
        {
            printf("%d", n);
            break;
        }
    }

    return 0;
}
