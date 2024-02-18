/*Да се напише програма која од тастатура чита три парови на координати (x1, y1), (x2, y2), (x3, y3), секој во нов ред,
 * како во пример внесот. Се смета дека координатите се за точките A, B, C соодветно. Програмата го печати името на
 * најдолгата отсечка, како во примерот. Се смета дека секогаш има една таква отсечка.
Input	Result
-5 2
-8 -9
0 0
        BC*/
#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    int AB, BC, AC;
    AB = sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
    BC = sqrtf(powf(x3 - x2, 2) + powf(y3 - y2, 2));
    AC = sqrtf(powf(x3 - x1, 2) + powf(y3 - y1, 2));

    if (AB > BC && AB > AC) {
        printf("AB\n");
    } else if (BC > AB && BC > AC) {
        printf("BC\n");
    } else {
        printf("AC\n");
    }
    return 0;
}
