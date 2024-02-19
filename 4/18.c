/*
 * Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делители е најголем. При пресметување на збирот на делителите на даден број, да не се зема во предвид и самиот број.

For example:

Input	Result
10
        Baraniot broj e: 8*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, number, zbir=0, max=0;
    scanf("%d", &n);
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i/2;j++){
            if(i%j==0){
                zbir+=j;
            }
            if(max<=zbir){
                max=zbir;
                number=i;
            }
        }
        zbir=0;
    }
    printf("Baraniot broj e: %d", number);
}