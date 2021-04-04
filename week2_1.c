#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x, a = 1, t,c_cos,d_cos;
    int n=0;
    printf("input x : ");
    scanf("%f",&x);
    t = x/a;
    printf("%-10s%-10s%-10s","term","value","sum");
    printf("\n=========================\n");
    while (fabs(t)>0.00001)
    { 
        c_cos = c_cos + t;
        n++;
        printf("%-8d%10.6f%10.6f\n",n,t,c_cos);
        t = (-1)*t*pow(x,2)/(a)/(a+1);
        a = a+2;
    }
    d_cos = cos(x);
    printf("=========================\n");
    printf("cos(1.00) from computer = %f\n",c_cos);
    printf("cos(1.00) from function = %f\n",d_cos);
    printf("number of term = %d",n);
return 0;
}