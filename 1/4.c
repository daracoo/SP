/*
Да се напише програма која пресметува просечна оцена во семестар. Програмата чита 5 цели броја. Треба да се испечати еден реален број на две децимали, просек на прочитаните броеви.

For example:

Input	    Result
6 6 6 6 7
            6.20
 */
#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    float ars;
    scanf ("%f %f %f %f %f", &a, &b, &c, &d, &e);
    ars= (a+b+c+d+e)/5;
    printf ("%.2f", ars);

    return 0;
}