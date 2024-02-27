/*
Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100). Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.

For example:

Input	                            Result
ako34D neka12em bashka41mewr20!
                                    107
 */
#include <stdio.h>

int main()
{
    char kar;
    int prethodna=0;
    int zbir=0;
    while(kar!='!'){
        scanf("%c", &kar);
        if((int)kar>47 && (int)kar<58){
            if(prethodna==0){
                prethodna=(int)kar-48;
            }
            else{
                zbir+=prethodna*10+(int)kar-48;
                prethodna=0;
            }
        }
        else if(prethodna!=0){
            zbir+=prethodna;
            prethodna=0;
        }
    }
    printf("%d", zbir);
}