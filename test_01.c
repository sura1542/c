#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j, k, n2;
    for ( n = 100, n <= 999; n++ )
    { i = n/100;
      j = (n - i*100)/10;
      k = n-1*100 - j*10;
      n2 = i*i*i+j*j*j+k*k*k
      if (n == n2) printf("n = %d \n",n);
    }
getch();
return 0;
}