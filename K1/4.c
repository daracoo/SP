/*
Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100). Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.

For example:

Input	                            Result
ako34D neka12em bashka41mewr20!
                                    107
 */
#include <stdio.h>

int isDigit(char a)
{
    for (int i = 0; i <= 10; i++)
        if (a == (char) ('0' + i))
            return 1;
    return 0;
}

int main()
{
    char a = '0';
    int s = 0;
    int n = 0;

    for (int i = 0; a != '!'; i++)
    {
        scanf("%c", &a);

        if (isDigit(a) == 1)
        {
            n *= 10;
            n += (int) a - '0';
        }
        else
        {
            s += n;
            n = 0;
        }
    }

    printf("%d", s);
    return 0;
}