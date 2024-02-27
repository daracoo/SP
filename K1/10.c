/*
Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга. На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:

a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e

Пр. 343, 4624, 6231209
Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

For example:

Input	Result
343
22
4624
123456
6231209
9
k
        343
        4624
        6231209
 */
#include <stdio.h>

int main(){
    int br,startBr;
    while(1){
        if(!scanf("%d",&br)) break;
        startBr=br;
        if(br<10) continue;
        int znak;
        if(br%10>br/10%10){
            znak = 1;
        }else if(br%10<br/10%10){
            znak = 0;
        }else continue;

        while(br!=0){
            br/=10;
            if(br<10){
                printf("%d\n",startBr);
                break;
            }
            if(znak){
                if(br%10>=br/10%10) break;
            }else{
                if(br%10<=br/10%10) break;
            }
            znak=!znak;
        }

    }


    return 0;
}