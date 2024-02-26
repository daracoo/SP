/*
Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.). Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри. Доколку добиениот декаден збир е делив со 16 се печати Pogodok. Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), се печати Poln pogodok инаку се печати самиот збир.

Пример:

влез: A 7 F 2 0 c A 5

излез: 61

(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)

For example:

Input	 Result
0
1
0
0
0
1
d
0
0
0
1
.
        Poln pogodok
 */
#include <stdio.h>

int main()
{
    char a;
    int z = 0;

    while (1)
    {
        scanf("%c", &a);

        if (a == '.')
            break;
        else if (a == '0')
            continue;
        else if (a == '1')
            z += 1;
        else if (a == '2')
            z += 2;
        else if (a == '3')
            z += 3;
        else if (a == '4')
            z += 4;
        else if (a == '5')
            z += 5;
        else if (a == '6')
            z += 6;
        else if (a == '7')
            z += 7;
        else if (a == '8')
            z += 8;
        else if (a == '9')
            z += 9;
        else if (a == 'a' || a == 'A')
            z += 10;
        else if (a == 'b' || a == 'B')
            z += 11;
        else if (a == 'c' || a == 'C')
            z += 12;
        else if (a == 'd' || a == 'D')
            z += 13;
        else if (a == 'e' || a == 'E')
            z += 14;
        else if (a == 'f' || a == 'F')
            z += 15;
    }

    if (z % 16 == 0 && z % 100 == 16)
        printf("Poln pogodok");
    else if (z % 16 == 0)
        printf("Pogodok");
    else
        printf("%d", z);

    return 0;
}