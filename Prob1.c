#include<conio.h>
#include<stdio.h>
int main()
{
    float price,Vat,discount,net_play ;
    printf("input price : ");
    scanf("%f",&price);
    Vat = price + (price*0.07);
    if (price <= 10000)
    {
        discount = Vat*5/100;
    }
    else
    {
        discount = Vat*10/100;    
    }
    net_play = Vat - discount;
    printf("******************\n");
    printf("price     = %.2f\n",price);
    printf("price+vat = %.2f\n",Vat);
    printf("discount  = %.2f\n",discount);
    printf("net pay   = %.2f\n",net_play);
    printf("******************\n");
return 0;
getch();

}