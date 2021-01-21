#include<stdio.h>
int main()
{
    int age;
    char name[100];

    printf("your name's ", name);
    scanf("%s",&name);


    printf("your age :");
    scanf("%d",&age);

    if (age <= 20)
    {
        printf(" %d pass ",age);
    }
    else
    {
        printf(" %d false ",age);
    }
    return 0;
}