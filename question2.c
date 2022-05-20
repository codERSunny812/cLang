/*program to print multiplication table of any number */

#include<stdio.h>
int main(){
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("the table of the given number is  \n");
    for (int i = 10; i>=1; i--)
    {
        printf("%d*%d=%d\n",n,i,n*i);

    }
    
return 0;
}
