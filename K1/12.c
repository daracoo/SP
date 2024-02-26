/*
Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број. За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:

[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]

0: 2

1: 3

2: 1

3: 1

4: 1


за броевите 97654 48654 12345 12343 1263 12443 12643 12777


For example:

Input	                                            Result
97654 48654 12345 12343 1263 12443 12643 12777 #
                                                    0: 2
                                                    1: 3
                                                    2: 1
                                                    3: 1
                                                    4: 1
123 456 789 987 654 321 #
                                                    0: 3
                                                    1: 0
                                                    2: 3
                                                    3: 0
                                                    4: 0
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    int pozicija0=0;
    int pozicija1=0;
    int pozicija2=0;
    int pozicija3=0;
    int pozicija4=0;
    while(scanf("%d", &x))
    {
        int pozicija=0;
        int momentalnapozicija=0;
        int maxcifra=0;
        while(x>0)
        {
            int cifra=x%10;
            if (cifra>maxcifra)
            {
                maxcifra=cifra;
                pozicija=momentalnapozicija;
            }
            x/=10;
            momentalnapozicija++;
        }
        switch(pozicija)
        {
            case 0:
                pozicija0++;
                break;
            case 1:
                pozicija1++;
                break;
            case 2:
                pozicija2++;
                break;
            case 3:
                pozicija3++;
                break;
            case 4:
                pozicija4++;
                break;
        }
    }
    printf("0: %d\n", pozicija0);
    printf("1: %d\n", pozicija1);
    printf("2: %d\n", pozicija2);
    printf("3: %d\n", pozicija3);
    printf("4: %d\n", pozicija4);
}