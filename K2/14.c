/*
Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50). Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N редици x N колони.

 */
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int matrix[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int temp[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j]=matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i+n][j]=matrix[i][j+n];
        }
    }

    for(int i=0;i<n*2;i++){
        for(int j=0;j<n;j++){
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }
}