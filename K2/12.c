/*
Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа. Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:

int BrojPozitivni(int niza[], int n);

Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

For example:

Input	Result
2
-2
5
        1
 */
#include <stdio.h>

int brojPozitivni(int niza[], int n){
    if(n<0){
        return 0;
    }
    else return (niza[n]>0) + brojPozitivni(niza, n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int niza[100];
    for(int i=0;i<n;i++){
        scanf("%d", &niza[i]);
    }

    int br=brojPozitivni(niza, n-1);
    printf("%d", br);
}
