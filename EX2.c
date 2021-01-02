#include<stdio.h>
int main(){
    float base,heigth,area ;
    printf(" your area  \n");
    printf("input number : ");
    scanf("%f",&base);
    printf("input number :");
    scanf("%f",&heigth);
    area = 0.5*base*heigth;
    printf("you area is %.2f\n",area);
    return 0;
}
