/*
  Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.

Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.

Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.

Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)

For example:

Input	            Result
12345678 1357
                    PAREN
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a<=0 || b<=0)
    {
        printf("Invalid input");
        return 0;
    }
    int max, min;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    while(min>0)
    {
        int ciframin = min % 10;
        min /= 10;

        int ciframax = (max / 10) % 10;
        max /= 100;

        if (ciframin != ciframax) {
            printf("NE");
            return 1;
        }
    }
    printf("PAREN");
    return 0;
}