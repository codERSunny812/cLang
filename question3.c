/*program to print multiplication table ogf 10 in reverse order*/
#include<stdio.h>
int main(){
    int a=10;
    for ( int i = 10; i>=1; i--)
    {
        printf("%d*%d=%d \n",a,i,a*i);
    }
    
return 0;
}
