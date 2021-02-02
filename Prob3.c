#include<stdio.h>
int main()
{
    int Begin, End, i, j;
    printf("Begin :");
    scanf("%d",&Begin);
    printf("End   :");
    scanf("%d",&End);
    for(i=1 ;i <= 12 ;i++){
        for(j = Begin; j <= End; j++){
            printf("%2d*%2d=%3d   ",j,i,i*j);

        }
        printf("\n");
    }
}