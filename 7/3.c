/*
Од стандарден влез се вчитува квадратна матрица со n редици и колони. Прво се вчитува бројот n, па потоа и n елементите на матрицата.

Доколку n е непарен број да се испечати пораката GRESKA и да заврши програмата.

При диплење на матрицата, се собираат елементите на позициите што се поклопуваат при диплењето
 For example:

Input	                Result
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
                        34 34
                        34 34
11
2 0 6 5 9 6 7 4 8 8 5
2 6 9 0 4 6 0 6 0 8 6
1 7 2 2 7 5 2 1 9 1 9
2 4 4 0 6 9 9 0 1 0 8
2 4 2 0 1 5 2 7 0 3 9
3 5 1 9 9 8 6 1 6 4 2
5 0 6 9 2 7 8 8 2 1 6
3 8 5 2 3 5 7 3 8 5 9
3 8 1 8 6 0 1 2 5 7 0
1 4 2 0 8 8 1 0 8 3 6
5 3 6 0 8 5 5 0 0 2 8
                        GRESKA
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[100][100];
    int n;
    scanf("%d", &n);
    if(n%2!=0){
        printf("GRESKA");
        return 0;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int a=0, b=0;

    for(int i=n-1;i>=n/2;i--){
        for(int j=0;j<n;j++){
            matrix[a][b]+=matrix[i][j];
            b++;
        }
        a++;
        b=0;
    }

    a=b=0;
    for(int i=0;i<n/2;i++){
        for(int j=n-1;j>=n/2; j--){
            matrix[a][b]+=matrix[i][j];
            b++;
        }
        a++;
        b=0;
    }

    for(int i = 0; i < n / 2; i++) {
        for(int j = 0; j < n / 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
