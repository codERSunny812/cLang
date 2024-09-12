/*program to calculate the factorial of any number*/
#include<stdio.h>
int main(){
    int a,fact=1;
    printf("enter the number whose factorial you want to calculate \n");
    scanf("%d",&a);
for (int  i = 1; i<=a; i++)
{
    //a=a*i;
    //fact=a*i*(i-1);
    fact=fact*i;
}
printf("the factorial of the number is %d",fact);

return 0;
}
