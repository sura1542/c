#include<stdio.h>
int main()
{
    int x[20],i,n,m,flag, gcd,j;
    printf("input number : ");
    printf("\n----------------\n");
    for (i = 1;; i++)
    {
        printf("x[%d] = ",i);
        scanf("%d", &x[i]);
        if (x[i] < 0)
        {
            break;
        }
        
    }
    n = i-1;
    m = x[1];
    for (i = 1; i <= n; i++)
    {
        if (x[i] < m)
        {
            m = x[i];
        }
        
    }
    for (i = 1; i <= m; i++)
    {
        flag = 0;
        for (j = 1; j <= n; j++)
        {
            if (x[j]%i != 0)
            {
                flag = 1;
                break;
            }
            
        }
        if (flag == 0)
        {
            gcd = i;
        }
        
        
    }
    printf("The GCD = %d",gcd);
    return 0;
}