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

int main()
{
    int x;

    int vkupnoNaPozicija0 = 0;
    int vkupnoNaPozicija1 = 0;
    int vkupnoNaPozicija2 = 0;
    int vkupnoNaPozicija3 = 0;
    int vkupnoNaPozicija4 = 0;

    while (scanf("%d", &x))
    {
        // Ovie dve promenlivi se za maksimalnata cifra
        int maksCifra = 0;
        int pozicija = 0;

        // ova e
        int pozicijaNaMomentalnaCifra = 0;

        // ovde delime cifri
        while (x > 0)
        {
            int cifra = x % 10;

            if (cifra > maksCifra)
            {
                maksCifra = cifra;
                pozicija = pozicijaNaMomentalnaCifra;
            }

            x /= 10;
            pozicijaNaMomentalnaCifra++;
        }

        switch (pozicija)
        {
            case 0:
                vkupnoNaPozicija0++;
                break;
            case 1:
                vkupnoNaPozicija1++;
                break;
            case 2:
                vkupnoNaPozicija2++;
                break;
            case 3:
                vkupnoNaPozicija3++;
                break;
            case 4:
                vkupnoNaPozicija4++;
                break;
        }
    }

    printf("0: %d\n", vkupnoNaPozicija0);
    printf("1: %d\n", vkupnoNaPozicija1);
    printf("2: %d\n", vkupnoNaPozicija2);
    printf("3: %d\n", vkupnoNaPozicija3);
    printf("4: %d\n", vkupnoNaPozicija4);

    return 0;
}