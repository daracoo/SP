/*
Да се напише програма која вчитува од стандарден влез два децимални броја (маса во кг и висина во цм) и пресметува и печати на стандарден излез индекс на телесна маса по формулата:

$BMI = \frac{masa}{visina * visina}$

Висината претходно треба да се претвори од сантиметри во метри.

For example:

Input	Result
45 150
        20.00
 */
#include <stdio.h>
int main()
{
    float masa, visina;
    scanf("%f %f", &masa, &visina);
    visina=visina/100.0;
    float BMI=masa/(visina*visina);
    printf("%.2f", BMI);
}