/*
Дадена е текстуална датотека text.txt.

Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.

Пример: за датотеката:

IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6
For example:

Input	            Result
Why so serious?
#
                        io
                        ou
                        2
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

int samoglaska(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int main() {

    writeToFile();

    // Vasiot kod zapocnuva od tuka
    FILE *f=fopen("text.txt","r");

    char c,prethodna;
    int br=0;
    prethodna=fgetc(f);
    while((c=fgetc(f))!=EOF){
        if(samoglaska(tolower(prethodna)) && samoglaska(tolower(c))){
            printf("%c%c\n", tolower(prethodna), tolower(c));
            br++;
        }
        prethodna=c;
    }
    printf("%d",br);

    fclose(f);
    return 0;
}
