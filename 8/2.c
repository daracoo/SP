/*Од стандарден влез се чита цел број К, по што се читаат N цели броеви. Да се напише програма која за секој прочитан број на стандарден излез ќе ги отпечати неговите цифри кои се поголеми од К, како и збирот на цифрите кои се отпечатени. Печатењето на цифрите поголеми од K да се реализира со посебна рекурзивна функција.

Пример: Доколку К = 5, за бројот 8423871 треба да се отпечати 887 : 23

For example:

Input	   Result
4
4
25481234
9142347
1547810115
569124
            58 : 13
            97 : 16
            5785 : 25
            569 : 20
 */
#include <stdio.h>
#include <stdlib.h>


int novBroj(int broj,int k){
    if(!broj) return 0;
    else{
        if((broj%10)>k) return broj%10+10*novBroj(broj/10,k);
        else return novBroj(broj/10,k);
    }
}

int zbir(int broj){
    if(!broj) return 0;
    else return broj%10+zbir(broj/10);
}

int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int broj;
    for(int i=0;i<n;i++){
        scanf("%d",&broj);
        printf("%d : %d",novBroj(broj,k),zbir(novBroj(broj,k)));
        printf("\n");
    }

    return 0;
}