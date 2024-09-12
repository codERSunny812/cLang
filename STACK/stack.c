// in this program we have to perfron all the stack operations.
#include<stdio.h>
#define MAX 6
int stack[MAX],top =-1;
int main(){
    for (int  i = 0; i < MAX-1; i++)

    {
        top++;
        stack[top]=i;

    }
    printf("the element in stack are %d",stack[top]);

return 0;
}