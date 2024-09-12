#include<stdio.h>
int main()
{
 int a,b;
 void add(int ,int );
 printf("enter the numbers \n");
 scanf("%d %d",&a,&b);   
    add(a,b);
    return 0;
}
 void add(int x,int y)
 {
     //int ,b;
    // printf("enter the numbers \n");
    // scanf("%d %d",&a,&b);
     printf("the sum of the number is %d",x+y);
 }