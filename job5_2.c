#include <stdio.h>
int main()
{
    int i, j, n, array[100], gcd, min, flag;
    printf("input number : \n");
    printf("----------------\n");
    for(i=1;;i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &array[i]);
        if(array[i] == -1)
            break;
    }
    n = i-1;
    min = array[1];
    for(i=1;i<=n;i++)
    {
        if(array[i] < min )
        {
            min = array[i];
        }
    }
    for(i=1;i<=min;i++)
    {
        flag = 0;
        for(j=1;j<=n;j++)
        {
            if(array[j]%i != 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            gcd = i;
    }
    printf("The GCD = %d", gcd);
    return 0;
}
