#include<stdio.h>
int main(){
    float m,cm,n,mm ;
    scanf("%f",&m);

    cm = m*100 ;
    n = cm/2.54;
    mm = cm*10 ;
    printf("Your  cen = %f\n",cm);
    printf("      n = %f\n",n);
    printf("      mm = %f\n",m);
    return 0;
}
