#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n = 0;
    char word[100];
    printf("input sentence : ");
    gets(word);
    for ( i = 0; word[i]!='\0'; i++)
    {
        if (word[i] >= 97 && word[i] <= 122)
        {
            printf("%c",word[i] - 32);
        }
        if (word[i] ==  ' ')
        {
            printf("\n");
            n++;
        }
    }
    printf("\ntotal = %d word",n +1 );
    
    
}