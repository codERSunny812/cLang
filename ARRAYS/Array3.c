#include<stdio.h>

int main(){

int arr[4]={1,2,3,4}; // array initlization

printf("%d \n",arr+1); //dont use d its used for interger and here in this case it may give fault result
printf("%p \n",arr+1);


printf("the adress of the first block of the array is: %p \n",arr);
printf("the adress of the second block of the array is:%p \n",arr+1);

// exception case

printf(" the valuef the adress is %p \n",&arr);
printf(" the value of the adress is %p \n",&arr+1);
printf(" the value of the adress is %p",&arr[0]);




    return 0;
}