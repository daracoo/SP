/*
 * За дадена низа од N големина, исчитајте ја истата и потоа:

Испечатете ја во нејзината оригинална форма
Сменете го распоредот на низата во обратна насока
Отстранете го секој втор член
Повторно сменете го распоредот на низата во обратна насока
За секоја од овие промени испечатете ја низата. За целосни поени работете само со една низа.

Пример:

Влез:

5 1 2 3 4 5

Излез:

1 2 3 4 5

5 4 3 2 1

5 3 1

1 3 5

For example:

Input	    Result
5
1 2 3 4 5
            1 2 3 4 5
            5 4 3 2 1
            5 3 1
            1 3 5
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int niza[100];
    for(int i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ", niza[i]);
    }
    printf("\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ", niza[i]);
    }
    int brElementi=0, temp[100];
    printf("\n");
    for(int i=n-1;i>=0;i-=2){
        printf("%d ", niza[i]);
        temp[brElementi]=niza[i];
        brElementi++;
    }
    printf("\n");
    for(int i=brElementi-1;i>=0;i--){
        printf("%d ", temp[i]);
    }
}