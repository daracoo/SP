/*Да се напише програма која што проверува дали една квадратна равенка има реални решенија и истите ги пресметува.

Една квадратна равенка од облик aх2+ bх + c = 0 има две различни реални решенија доколку вредноста на изразот b2 - 4ас е поголема од 0. Доколку вредноста на изразот е 0, равенката има едно двојно реално решение, а доколку изразот е помал од 0 равенката нема реални решенија.

Влезот на програмата се коефициентите a,b иc на равенката.

Доколку равенката има две различни решенија потребно е на излезот да се испише: "Reshenija na ravenkata se: " и да се наведат решенијата одвоени со сврзникот "i" .

Доколку равенката има едно решение потребно е да се испечати: "Dvojno reshenie na ravenkata e: " и да се наведе решението.

Доколку равенката нема решение потребно е да се испечати: "Ravenkata nema realni reshenija".

For example:

Input	Result
1 2 1
        Dvojno reshenie na ravenkata e: -1.00*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, root1, root2;
    scanf("%f %f %f", &a, &b, &c);
    float izraz=(b*b)-(4*a*c);
    if(izraz>0)
    {
        root1 = (-b + sqrt(izraz)) / (2 * a);
        root2 = (-b - sqrt(izraz)) / (2 * a);
        printf("Reshenija na ravenkata se: %.2f i %.2f", root2, root1);
    }
    else if(((b*b)-(4*a*c)==0))
    {
        root1 = root2 = -b / (2 * a);
        printf("Dvojno reshenie na ravenkata e: %.2f", root1);
    }
    else
    {
        printf("Ravenkata nema realni reshenija");
    }
}