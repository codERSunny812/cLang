#include<stdio.h>
int add(void);
int main()
{
    int s;

     //int add();
    s=add();
    printf("the sum of the number is %d",s);
    //return 0;
}
 int  add()
 {
     int a,b,c;
     printf("enter the numbers \n");
     scanf("%d %d",&a,&b);
     c=a+b;
     return c;
    // printf("the sum of the number is %d",a+b);
 }