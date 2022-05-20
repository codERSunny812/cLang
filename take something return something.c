#include<stdio.h>
int add(int ,int );
int main()
{
    int x,y,s;
    printf("enter the numbers");
    scanf("%d %d",&x,&y);
    //void add (void );
   s= add(x,y);
   printf("the sum of the number is %d",s);
    //return 0;
}
 int add( int a,int b )
 {
    
     printf("enter the numbers \n");
     scanf("%d %d",&a,&b);
     return (a+b);
 }