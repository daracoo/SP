/*
 * Продолжение на претходната задача:

Од стандарден влез најпрво се читаат информации за бројот на фискални сметки коишто ќе бидат скенирани М, а потоа се вчитуваат податоци за M фискални сметки, како во претходната задача.

На стандарден излез да се испечати повратокот на ДДВ за секоја од скенираните фискални сметки. На крајот да се испечати сумата на купените артикли на фискалната сметка со најголем повраток на ДДВ, како и повратокот на ДДВ за таа сметка.

Да се игнорираат фискалните сметки, коишто имаат сума на артиклите поголема од 30.000 денари и за истите да се испечати соодветна порака, како во тест примерите.

For example:

Input	                                                                        Result
11
4 847 B 1811 B 5447 A 971 B
10 4501 A 2615 V 4001 V 6473 A 4214 A 3240 V 2968 A 6642 V 5967 A 2149 V
1 4214 V
10 192 B 1923 A 6749 A 3683 B 4056 B 4246 A 4082 B 5990 B 1315 B 6479 B
4 4098 B 4924 A 913 A 714 B
8 645 B 1307 A 4474 B 4317 V 6182 V 1212 V 3937 V 5596 V
5 384 B 1838 V 2804 V 2634 B 5537 B
4 834 B 2923 B 3070 A 193 A
10 3469 A 3479 A 1385 V 5850 B 2775 V 1678 A 3446 B 702 V 3635 V 3599 V
10 6450 V 2452 B 4784 B 3779 A 3020 V 248 A 3569 B 1015 V 2172 B 2255 A
10 4437 A 6551 A 4571 V 2767 B 6745 B 3337 B 2357 B 5045 A 2831 V 905 B
                                                                                Total tax return is: 174.29
                                                                                Sum 42770 is bigger than 30000
                                                                                Total tax return is: 0.00
                                                                                Sum 38715 is bigger than 30000
                                                                                Total tax return is: 193.69
                                                                                Total tax return is: 73.68
                                                                                Total tax return is: 64.16
                                                                                Total tax return is: 116.28
                                                                                Sum 30018 is bigger than 30000
                                                                                Total tax return is: 266.94
                                                                                Sum 39546 is bigger than 30000
                                                                                Max amount of reciept: 29744. Max tax return for reciepts: 266.94
 */
#include <stdio.h>

int main()
{
    int a;
    char c;

    int n;
    int m;

    scanf("%d", &m);

    float d;
    int s;

    float f = 0;
    int e = 0;

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);

        d = 0;
        s = 0;

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a);
            scanf("%c", &c);
            scanf("%c", &c);

            if (c == 'A')
            {
                d += a * 0.18;
                s += a;
            }
            else if (c == 'B')
            {
                d += a * 0.05;
                s += a;
            }
            else if (c == 'V')
                s += a;
        }

        if (s > 30000)
            printf("Sum %d is bigger than 30000\n", s);
        else
            printf("Total tax return is: %.2f\n", d * 0.15);

        if (f < d && s < 30000)
        {
            e = s;
            f = d;
        }

    }

    printf("Max amount of reciept: %d. Max tax return for reciepts: %.2f", e, f * 0.15);
    return 0;
}