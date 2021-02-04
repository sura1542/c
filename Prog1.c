#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j;
    for (i=0;i <= 9;i++)
    {

    
        for(j=0;j <= 9;j++)
        {
            if(i==j || j+i==9 || i==0 || i==9)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return(0);

}