#include<stdio.h>
#include<stdlib.h>
int main(){

int *ptr;
int N;
 printf("enter the no of elements");
 scanf("%d",&N);

 ptr = malloc(sizeof(int)*N);

 if(ptr != NULL){

    for (int i = 0; i < N; i++)
    {
       scanf("%d",(ptr+i));
    }


    for (int i = 0; i < N; i++)
    {
       printf("%d",*(ptr+i));
    }
    
 }



    return 0;
}