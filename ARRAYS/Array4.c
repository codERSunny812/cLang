#include<stdio.h>

int main(){

printf("two dimensional array");

int arr[2][3]={1,2,3,4,5,6};

printf("the adress of the array is %p \n",arr);
printf("the value of this is %p \n",arr[0]);
printf("the value of the  is %p \n",arr+1);
printf("the value of the  is %p \n",&arr);
printf("the value of the  is %p \n",&arr+1);
printf("the value of the  is %p \n",arr[0]+1);





    return 0;
}