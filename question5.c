/*program  to find sum of natural numbers using do while loop */
#include<stdio.h>
int main(){
    int i,sum=0;
    printf("enter the number upto which u have to find the sum \n");
    scanf("%d",&i);
    do
    {
    sum+=i;
    i++;
    } while (i<=10);
    
    
printf("the sum of the number is %d",sum);
    
return 0;}
