/*
Да се напише програма во која од стандарден влез прво се внесува еден позитивен цел број z, а потоа последователно се внесуваат парови цели броеви (a, b). Внесувањето на парови цели броеви треба да заврши кога корисникот ќе го внесе парот (0, 0). Треба да се пресмета колку пати z е еднаков на збирот на секој внесен пар броеви a и b, како и колкав процент од вкупниот број внесени парови (a, b) даваат збир z (ЗАБЕЛЕШКА: парот (0, 0) не се зема во предвид при извршувањето на пресметките!).

For example:

Input	    Result
100
50 50
-50 -50
-99 199
32 98
0 0
            Vnesovte 2 parovi od broevi chij zbir e 100
            Procentot na parovi so zbir 100 e 50.00%
 */
#include <stdio.h>

struct pair
{
    int a;
    int b;
};

int main()
{
    int z = 0;
    int n = 0;
    int k = 0;
    struct pair p;
    scanf("%d", &z);

    while (1)
    {
        scanf("%d%d", &p.a, &p.b);
        if (p.a == 0 && p.b == 0)
            break;
        else if (p.a + p.b == z)
            k++;
        n++;
    }

    printf("Vnesovte %d parovi od broevi chij zbir e %d\n"
           "Procentot na parovi so zbir %d e %.2f%%", k, z, z, 100.0 * k / n);

    return 0;
}