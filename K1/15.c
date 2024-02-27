/*
Од тастатура се внесува колку студенти полагале колоквиум и потоа се внесуваат поените на сите кои полагале. Програмата треба да отпечати средна вредност на поените на сите студенти кои имале помалку од 50 поени, како и список на студентите со повеќе од 50 поени. Исто така програмата да отпечати средна вредност на поените на сите кои положиле со најмалку 50 поени и нивните освоени поени (редоследот на печатење во двата случаеви треба да биде ист како и редоследот на внесување). Максималниот број на студенти што може да се внесат е 1000.

Влез:

10 //Kolku studenti?

20 10 50 60 70 90 40 20 70 90 //Poeni?

Излез

Sredna vrednost na padnati 22.50

20 10 40 20

Sredna vrednost na polozeni 71.67

50 60 70 90 70 90



For example:

Input	                            Result
10
20 10 50 60 70 90 40 20 70 90
                                    Sredna vrednost na padnati 22.50
                                    20 10 40 20
                                    Sredna vrednost na polozeni 71.67
                                    50 60 70 90 70 90
25
47 87 46 94 48 78 34 31 14 65 18 36 60 7 92 62 28 10 30 88 6 35 59 51 79
                                    Sredna vrednost na padnati 27.86
                                    47 46 48 34 31 14 18 36 7 28 10 30 6 35
                                    Sredna vrednost na polozeni 74.09
                                    87 94 78 65 60 92 62 88 59 51 79
 */
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int niza[1000];
    for(int i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }
    int sumaNepolozeni=0, brojacNepolozeni=0;
    int sumaPolozeni=0, brojacPolozeni=0;
    int nepolozeni[1000], polozeni[1000];
    for(int i=0;i<n;i++){
        if(niza[i]<50){
            nepolozeni[brojacNepolozeni++]=niza[i];
            sumaNepolozeni+=niza[i];
        }else{
            polozeni[brojacPolozeni++]=niza[i];
            sumaPolozeni+=niza[i];
        }
    }
    float prosekNepolozeni = (float)sumaNepolozeni/brojacNepolozeni;
    printf("Sredna vrednost na padnati %.2f\n", prosekNepolozeni);
    for(int i=0;i<brojacNepolozeni;i++){
        printf("%d ", nepolozeni[i]);
    }
    printf("\n");
    float prosekPolozeni = (float)sumaPolozeni/brojacPolozeni*1.0;
    printf("Sredna vrednost na polozeni %.2f\n", prosekPolozeni);
    for(int i=0;i<brojacPolozeni;i++){
        printf("%d ", polozeni[i]);
    }
}