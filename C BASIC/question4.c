/*program to find sum of natural numbers */

#include<stdio.h>
int main(){
    int i,sum=0;
    printf("enter the number upto which u have to find the sum \n");
    scanf("%d",&i);
    while (i<=10)
    {
        sum =sum+i;
        i++;
    }
printf("the sum of the number is %d",sum);
    
return 0;}
