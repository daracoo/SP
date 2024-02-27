/*
Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

Пример:

 111100110011

1 ред + 1 колона = 2

For example:

Input	            Result
3 8
0 0 1 1 1 0 0 0
1 1 1 0 1 1 1 0
0 1 1 1 1 0 0 1
                    5
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int red, kolona, vk=0;

    for(int i=0;i<n;i++){
        red=0;
        for(int j=0;j<m;j++){
            red+=matrix[i][j];
            if(red>2){
                vk++;
                break;
            }
            if(matrix[i][j]==0) red=0;
        }
    }

    for(int j=0;j<m;j++){
        kolona=0;
        for(int i=0;i<n;i++){
            kolona+=matrix[i][j];
            if(kolona>2){
                vk++;
                break;
            }
            if(matrix[i][j]==0) kolona=0;
        }
    }

    printf("%d", vk);

}
