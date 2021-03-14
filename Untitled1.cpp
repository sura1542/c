#include<conio.h>
#include<stdio.h>
int main(){
	int a[100],i,n=0,big=0;
	for(i=1;;i++){
	printf("a[%d] = ",i);
	scanf("%d",&a[i]);
	n++;
	if(a[i]<0) break;
	}
	for(i=1;i<=n;i++){
		if(a[i]>=big){
			big = a[i];
		}
	}
	printf("%d",big);
}
