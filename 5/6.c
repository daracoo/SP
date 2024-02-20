/*Се внесува време во македонска форма (3 вредности: час - од 0 до 23, минути – од 0 до 59, и секунди – од 0 до 59). Да се презентира времето во интернационална форма во која за 0 часот стои 12, од 13 часот до 23 се всушност од 1 до 11, а на крајот стои AM доколку времето е претпладне (од 0:00:00 до 11:59:59) и PM доколку времето е попладне (од 12:00:01 до 23:59:59). За времето на пладне (12:00:00) после него се печати NOON.

Формата за точен излез може да се види во тест примерите.

For example:

Input	Result
0
32
58
        12:32:58AM
12
0
0
        12:00:00NOON
21
17
22
        09:17:22PM
 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, min, sec;
    scanf("%d %d %d", &hour, &min, &sec);
    if(hour>23 || min>59 || sec>59){
        return 0;
    }

    if(hour==12){
        printf("%02d:%02d:%02dNOON",hour,min,sec);
    }
    else if(hour<12){
        if(hour==0){
            hour=12;
        }
        printf("%02d:%02d:%02dAM",hour,min,sec);
    }
    else if(hour>12){
        hour=hour-12;
        printf("%02d:%02d:%02dPM",hour,min,sec);
    }
}
