#include<stdio.h>
int fibbo(int n);
int main()
{
    int a;
    //printf("enter any number \n");
    //scanf("%d",&a);
    printf("the fibonacci series of  the number is %d",fibbo(a));

return 0;
}
int fibbo(int n)
{
    int num;
    printf("please enter the number \n");
    scanf("%d",&num);
    if (num==0)
    {
        return 0;
    }
    else if (num==1)
    {
        return 1;
    }
    else {
        return fibbo(num-1)+fibbo(num-2);
    }
    
}