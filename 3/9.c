/*
 * Пресметајте ја цената за електрична енергија која еден корисник треба да ја плати, во зависност од тоа колку kWh потрошил. За помалку 500 kWh се наплаќа 5 ден/kWh. Ако трошокот ја надмине оваа граница, тогаш за наредните 150 kWh се наплаќа 7.5 ден/kWh, за наредните 200 kWh се наплаќа 11 ден/kWh, а за секој трошок над тоа се доплаќа уште 13.5 ден/kWh. На крајот на сметката се додава 10% ДДВ доколку изнесува 7000 денари или помалку, додека ако изнесува повеќе од тоа, се додава 18% ДДВ.

For example:

Input	Result
1000
        9263.00*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int trosok;
    scanf("%d", &trosok);
    int potrosenost1 = 500;
    float cena1 = 5;

    int potrosenost2 = 150;
    float cena2 = 7.5;

    int potrosenost3 = 200;
    float cena3 = 11;

    float cena4 = 13.5;

    if(trosok < potrosenost1) potrosenost1 = trosok;
    trosok -= potrosenost1;

    if(trosok < potrosenost2) potrosenost2 = trosok;
    trosok -= potrosenost2;

    if(trosok < potrosenost3) potrosenost3 = trosok;
    trosok -= potrosenost3;


    float vkupno = potrosenost1*cena1 + potrosenost2*cena2 + potrosenost3*cena3 + trosok*cena4;
    float vkupnoDDV;
    if(vkupno > 7000){
        vkupnoDDV = vkupno * 1.18;
    }
    else{
        vkupnoDDV = vkupno * 1.1;
    }
    printf("%0.2f", vkupnoDDV);
    return 0;
}