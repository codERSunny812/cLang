//program to create an array and store the multiplication table of any number 
#include<stdio.h>

int main(){
    
int multable[1][10];
for (int  i = 0; i < 10; i++)

{
    multable[0][i]=5*(i+1);
}
for (int  i = 0; i < 10; i++)
{
    printf("the table of %d is %d",5,multable[0][i]);
}


return 0;
}