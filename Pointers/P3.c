#include<stdio.h>
#include<stdlib.h>
int main(){



int a[5]={1,2,3,4,5};
int *ptr;
ptr=a;

printf("%d \n",*(ptr));
printf("%d \n",*(ptr+1));
printf("%d \n",*(ptr+2));
printf("%d \n",*(ptr+3));
printf("%d \n",*(ptr+4));



// acessing array using pointer 
printf("%d",ptr[0]);

//we can access the element by both using indexing and  pointer




    return 0;
}