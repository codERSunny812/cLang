#include<stdio.h>

int main(){

int arr[4]={1,2,3,4}; // array initlization

int * p;
p=arr;// pointer to the first index of the array
int *p2;
p2=&arr[0];
printf("the decimal value of the adress is %d \n",p);
printf("the decimal value of the adress is %p \n",(void *)p);

printf("the decimal value of the adress is %d \n",p2);
printf("the decimal value of the adress is %p \n",(void *)p2);


// now using the defrencing operator

printf("the value stored is %d \n",*p2);
printf("the value stored is %d \n",*p2);


// now find the value of a+1

printf("the value of a+1 is %p",arr+1);

printf("the value of a[i] is %d \n",arr[1]);
printf("the value of i[a] is %d \n",1[arr]);
printf("the value of *(a+1) is %d \n",*(arr+1));
printf("the value of *(1+a) is %d",*(1+arr));



    return 0;
}