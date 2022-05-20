#include<stdio.h>
//#define max 
int main(){
    int mark[5];
    printf("enter trhe marks of the student :");
    for (int  i = 0; i < 5 ; i++)
    {
        scanf("%d \n",&mark[i]);

    }
    for (int  i = 0; i< 5; i++)
    {
        printf("the marks of the students are %d\n",mark[i]);
    }
    

return 0;
}