/*
 * За дадена низа со големина N, прочитајте ги сите елементи од дадениот влез, а потоа сортирајте ја низата. Испечатете ја во растечки редослед.

Пример:

Влез:

5

4 3 2 5 1

Излез:

1 2 3 4 5

For example:

Input	    Result
5
4 2 3 1 5
            1 2 3 4 5 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, i, j, tmp;
    scanf("%d", &n);
    int niza[10000];
    for(i=0;i<n;i++)
    {
        scanf("%d", &niza[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(niza[j]<niza[i])
            {
                tmp=niza[i];
                niza[i]=niza[j];
                niza[j]=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", niza[i]);
    }
    return 0;
}