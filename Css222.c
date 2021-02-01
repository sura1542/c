#include<stdio.h>
#include<conio.h>
int main()
{
    float s,n;
    s = 0;
    n = 1;
    printf("=============\n");
p_1 : s = s + n/(n+1);
    n++;
    if (n <= 99)goto p_1;
    {
        printf(" s = %d\n",s);
        printf("=============\n");
    }
getch();
return(0);
}