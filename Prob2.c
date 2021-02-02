#include<stdio.h>
int main()
{
    float mid_term,final,homework,total;
    printf("input score  \n");
    printf("**************\n");
    printf("mid-term   (40%%) : ");
    scanf("%f",&mid_term);
    printf("Final      (40%%) : ",final);
    scanf("%f",&final);
    printf("Homework   (20%%) : ");
    scanf("%f",&homework);
    printf("***************\n");
    total = mid_term + final + homework;
    printf("total = %.2f\n ",total);
    if (total >= 80)
    {
        printf("grade = A");
    }
    else if (total >= 70 )
    {
        printf("grade B");
    }
    else if(total >= 60)
    {
        printf("grade C");
    }
    else if (total >= 50)
    {
        printf("grade D");
    }
    else
    {
        printf("grade F");
    }

    
}