/*
Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

For example:

Input	Result
10
        8
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, prethodnasuma=0;
    int max=0;
    for(i=1;i<n;i++)
    {
        int suma=0;
        int j;
        for(j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                suma+=j;
            }
        }
        if(prethodnasuma<suma)
        {
            max=i;
            prethodnasuma=suma;
        }
    }
    if(max!=0)
    {
        printf("%d", max);
    }
    return 0;
}