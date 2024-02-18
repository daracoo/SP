/*
 * За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.

0-50 = 5

51-60 = 6

61-70 = 7

71-80 = 8

81-90 = 9

91-100 = 10

Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:

1 - 3 = "-"

4 - 7 = " "

8-0 = "+"

For example:

Input	Result
101
        Nevalidna vrednost za poeni!*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int poeni, ocenka;
    scanf("%d", &poeni);
    if (poeni < 0 || poeni > 100)
        printf("Nevalidna vrednost za poeni!\n");
    else {
        if (poeni > 90) ocenka = 10;
        else if (poeni > 80) ocenka = 9;
        else if (poeni > 70) ocenka = 8;
        else if (poeni > 60) ocenka = 7;
        else if (poeni > 50) ocenka = 6;
        else ocenka = 5;
        char znak = ' ';
        int znak2 = poeni % 10;
        if (ocenka != 5) {
            if (znak2 >= 1 && znak2 <= 3) znak = '-';
            else if ((znak2 >= 8 && znak2 <= 10))
                znak = '+';
        }
        printf("Ocenka %d%c\n", ocenka, znak);
    }

}