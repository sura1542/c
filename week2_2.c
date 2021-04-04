#include<stdio.h>
#include<conio.h>
#include<math.h>
float functions(float x);
int main()
{
    float a,b,h,area;
    int n,i;
    printf("a,b : ");
    scanf("%f%f",&a,&b);
    printf("n : ");
    scanf("%d",&n);
    h = (b-a)/n;
    area = (functions(a) + functions(b))/2;
    for ( i = 1;i <= n-1; i++)
    {
        area = functions(a+i*h);
    } 
    printf("area = %f",area*h);
    return 0;
}
float functions(float x)
{
    return sqrt(x*x+2);
}    
