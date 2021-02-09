#include<stdio.h>
#include<conio.h>

int main()
{
    int End,i,j;
    printf("End Number : ");
    scanf("%d",&End);
    printf("  ");
    for (int i = 1; i <= End; i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    for (int i = 1; i <= End ; i++)
    {
        for (int j = 0; j <= End; j++)
        {
            if (j == 0)
            {
                printf("%2d",i);
            }
            else if (i+j >= End+1 )
            {
                printf("%4d",i*j);
            }
            else
            {
                printf("    ");
            }
            
        }
        printf("\n");
    }
    return 0;
}