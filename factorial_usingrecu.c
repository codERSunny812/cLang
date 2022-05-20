#include<stdio.h>
int factorial(int x);
int main(){
    int a;
    printf("enter the number to find the factorial  \n");
    scanf("%d",&a);
    printf("the factorial of the numbert is %d",factorial(a));


return 0;
}
int factorial(int x)
{
    if(x==1 || x==0)
    { return 1;}
    else
    {
        return x*factorial(x-1);
    }
}