/*
 * Даден е правоаголник кој се наоѓа во првиот квадрант од координатниот систем и страните му се паралелни со оските. Правоаголникот се задава со координатите на долното лево и горното десно теме (темињата А и С) кои се цели броеви. Потоа, се внесуваат координатите на две точки. Вашата програма за секоја од двете точки на излез треба да отпечати DA, ако дадената точка лежи врз правоаголникот (во правоаголникот и на страните) и NE ако е надвор од него.

For example:

Input	Result
5 5
25 15
10 10
32 8
        DA
        NE*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, c1, c2;
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &c1, &c2);
    int t1, t2;
    scanf("%d %d", &t1, &t2);
    int t3, t4;
    scanf("%d %d", &t3, &t4);

    if(t1 >=a1 && t1<=c1 && t2>=a2 && t2<=c2){
        printf("DA\n");
    }
    else{
        printf("NE\n");
    }
    if(t3 >=a1 && t3<=c1 && t4>=a2 && t4<=c2){
        printf("DA\n");
    }
    else{
        printf("NE\n");
    }
}