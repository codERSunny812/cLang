#include<stdio.h>
int main()
{
    int divident , divisor ,remainder ,quiotant;
    printf("enter the divident ");
    scanf("%d",&divident);
    printf("enter the divisor \n");
    scanf("%d",&divisor);
     // to compute remainder
     remainder=divident%divisor;
     printf("the remainder of the no are %d",remainder);
     //to compute quiotant 
     printf("the quiotant of the number is %d",quiotant);
     return 0;
}