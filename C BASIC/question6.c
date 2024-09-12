/*program to find sum of the number that come in the table of 8*/
#include<stdio.h>
int main(){
    int i,sum=0;
    printf("enter the number upto which u have to find the sum \n");
    scanf("%d",&i);
    while (i<=10)
    {
        sum =sum+i*8;
        i++;
    }
printf("the sum of the number is %d",sum);
    
return 0;}
