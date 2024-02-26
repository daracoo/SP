/*
Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

For example:

Input	Result
99 500
        200
 */

#include <stdio.h>

int main()
{
    int m, n, i;
    scanf("%d", &m);
    scanf("%d", &n);
    int minblag=-1;
    for(i=m;i<=n;i++)
    {
        int temp=i;
        int blagbroj=1;
        while(temp>0)
        {
            int cifra=temp%10;
            temp/=10;
            if(cifra%2!=0)
            {
                blagbroj=0;
                break;
            }
        }
        if(blagbroj==1)
        {
            if(minblag==-1)
            {
                minblag=i;
            }
        }
    }
    if(minblag!=-1)
    {
        printf("%d", minblag);
    }
    else
    {
        printf("NE");
    }
}