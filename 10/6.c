/*
Да се напише програма која што од датотека со име "text.txt" ќе ја одреди и ќе ја испечати на стандарден излез релативната фреквенција на буквата c која се вчитува од тастатура.

Релативната фреквенција на буквата се пресметува како количник на вкупното појавување на таа буква (без разлика на големината на буквата) со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

Да не се менува функцијата writeToFile().
 */
#include <stdio.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();

    char c;
    scanf("%c", &c);

    FILE * file = fopen("text.txt", "r");

    char curr;
    int total=0, count=0;

    while ((curr=fgetc(file)) != EOF) {
        if (isalpha(curr)) {
            total++;
            if (tolower(curr)== tolower(c)){
                ++count;
            }
        }
    }
    //printf("%d %d\n", upper,lower);
    printf("%.4f", (float) count/total);
}
