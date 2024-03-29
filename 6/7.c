/*
 * Од стандарден влез се чита цел број N. Потоа се вчитуваат N низи од цели броеви (со максимална должина од 100 елементи), при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата.

Да се напише програма која за секоја низа ќе го испечати процентот на огледални еднакви броеви во низата. Огледални броеви во низа се првиот и последниот, вториот и претпоследниот итн. Доколку низата има непарен број на елементи, средниот елемент е и огледален и еднаков.

пример влез:

3
5 7 2 5 2 8
6 1 2 3 3 1 1
8 8 4 8 3 2 1 4 8
пример излез и објаснување:

60.00% (2,2,5 се огледални и еднакви -> 3/5 елементи -> 60%)
66.67% (1,1,3,3 се огледални и еднакви -> 4/6 елементи -> 66.67%)
50.00% (8,8,4,4 се огледални и еднакви -> 4/8 елементи -> 50.00%)*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int a[100],m;
        scanf("%d",&m);
        for(int j=0;j<m;j++) scanf("%d",&a[j]);

        int ogledalni=0;
        for(int j=0;j<m;j++){
            if(a[j]==a[m-1-j]) ogledalni++;
        }

        printf("%.2f%%\n",(float)ogledalni*100/m);
    }

    return 0;
}