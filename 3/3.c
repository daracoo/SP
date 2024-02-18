/*Од тастатура се внесува четирицифрен број n што во себе содржи барем 2 цифри со вредност 5.

КОЛЕГА на тој број е бројот кој на позициите на кои има петки во првиот број ќе има шестка во бројот КОЛЕГА. (Пр. колега на 5551 е 6661).

На екран да се испечати за колку проценти едниот број е поголем/помал од другиот број. Да се има во предвид дека некогаш може да биде поголем бројот n , а некогаш неговиот колега.

Доколку бројот n не содржи најмалку 2 цифри петки, да се испечати порака за грешка како во тест примерите.

For example:

Input	Result
5500
        20.0000%*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int broj;
    scanf("%d", &broj);
    int cifra1=broj%10;
    int cifra2=(broj/10)%10;
    int cifra3=(broj/100)%10;
    int cifra4=broj/1000;
    int brPetki=0;
    if(cifra1==5){
        brPetki++;
    }
    if(cifra2==5){
        brPetki++;
    }
    if(cifra3==5){
        brPetki++;
    }
    if(cifra4==5){
        brPetki++;
    }
    int kolega=0;
    if(brPetki>=2){
        if(cifra1==5){
            kolega+=6;
        }
        else{
            kolega+=cifra1;
        }
        if(cifra2==5){
            kolega+=6*10;
        }
        else{
            kolega+=cifra2*10;
        }
        if(cifra3==5){
            kolega+=6*100;
        }
        else{
            kolega+=cifra3*100;
        }
        if(cifra4==5){
            kolega+=6*1000;
        }
        else{
            kolega+=cifra4*1000;
        }
        float razlika=0;
        if(broj>kolega){
            razlika=broj-kolega;
        }
        else{
            razlika=kolega-broj;
        }
        printf("%.4f%%", razlika/broj * 100.0f);
    }
    else{
        printf("Error");
    }
    return 0;
}