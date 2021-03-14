#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10], i, j, k, sum1 = 0, sum2 = 0;
    printf("input order of matrix A n = ");
    scanf("%d",&k);
    printf("input element of matrix A\n");
    for (int  i = 1; i <= k; i++)
    {
        for (int  j = 1; j <= k; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= k; i++)
    {
        printf("\n");
        for (int j = 1; j <= k; j++)
        {
            printf("%6d", a[i][j]);
        }
    }
    for (int  i = 1; i <= k; i++)
    {
        for (int  j = 1; j <= k; j++)
        {
           if (i == j)
           {
               sum1 += a[i][j];
           }
           if (i+j == k+1)
           {
               sum2 += a[i][j];
           } 
        }
    }
    printf("\nSum of diagonal 1 = %d", sum1);
    printf("\nSum of diagonal 2 = %d", sum2);
    return 0;
}