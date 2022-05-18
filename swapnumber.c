#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the number a , b\n");
    scanf("%d %d",&a,&b);
    int c;
    c=a;
    
    a=b;
    b=c;
    printf("the swap of the number  a, b is %d %d ",a,b);


}