#include<stdio.h>
int main()
{
    void add(void );
    add();
    return 0;
}
 void add()
 {
     int a,b;
     printf("enter the numbers \n");
     scanf("%d %d",&a,&b);
     printf("the sum of the number is %d",a+b);
 }