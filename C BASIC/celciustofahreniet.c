#include<stdio.h>
int tempertureconveter(int temp1);
int main()
{
int a;
printf("enter the temperture in celcius \n");
scanf("%d",&a);
printf("the temperture in fahreniet is %d",tempertureconveter(a));
return 0;
}
int tempertureconveter(int temp1)
{
    float result;
    result=((temp1*1.800)+32);
    return result;
}