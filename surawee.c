#include<stdio.h>
#include<conio.h>
int main()
{
int money,b500,b100,b20,c5,c1;
    printf("input money : ");
    scanf(" %d",& money);
    b500 = money/500;
    b100 = (money - b500*500)/100 ;
    b20 = (money - b500*500 - b100/100)/20 ;
    c5 = (money - b500*500 - b100*100 - b20*20)/5;
    c1 = (money - b500*500 - b100*100 - b20*20 - c5*5);
    printf("b500 = %d\n b100 = %d\n",b500,b100);
    printf("b20 = %d\n c5 = %d\n c1= %d\n",b20,c5,c1);
    getch();
return 0;
}