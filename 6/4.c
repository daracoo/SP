/*
За дадена квадратна матрица со големина N, најдете ја разликата помеѓу главната и споредната дијагонала, а потоа разликата помеѓу првата колона и последната колона на матрицата.

Пример:

Влез: 3

1 2 3

1 1 1

2 2 2

Излез:

-2

-2

For example:

Input	Result
5
        1 2 3 4 5
        9 8 7 6 5
        3 2 4 1 5
        6 6 6 6 0
        4 4 4 4 4
        -2
        4
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int glavna=0, sporedna=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                glavna+=matrix[i][j];
            }
            if(i+j==n-1){
                sporedna+=matrix[i][j];
            }
        }
    }

    int prva=0, vtora=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                prva+=matrix[i][j];
            }
            if(j==n-1){
                vtora+=matrix[i][j];
            }
        }
    }
    printf("%d\n", glavna-sporedna);
    printf("%d", prva-vtora);
}