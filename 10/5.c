/*
Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред).
Да се испечати на екран најдолгата текстуала низа која го содржи знакот C точно K пати без разлика на големината на буквата.
Ако нема таква низа, да се испечати порака NONE.
For example:

Input	                    Result
2 5 a
Strukturno
programiranje
                            NONE
5 2 a
Strukturno
programiranje vo c
programiranje vo c++
programiranje vo python
programiranje
                            programiranje vo python
 */
#include <stdio.h>
#include <ctype.h>
#include<string.h>

int contains(char *str, char c) {
    int counter = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == tolower(c)) {
            ++counter;
        }
    }
    return counter;
}


int main() {
    char str[100];
    char max[100];
    int flagMax;
    int n;
    char c;
    int k;
    scanf("%d %d %c\n", &n, &k, &c);
    int flag = 0;

    for (int i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';

        if (contains(str, c) == k) {
            if (flag == 0 || strlen(str) > strlen(max)) {
                strcpy(max, str);
            }
            flag = 1;
        }
    }

    if (flag == 0) {
        printf("NONE");
    } else {
        printf("%s", max);
    }

    return 0;

}
