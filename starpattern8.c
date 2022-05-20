#include<stdio.h>
int main()
{
    int i,j,k,row;
    printf("enter the no of row:");
    scanf("%d"&row);
    for ( i = 1; i <=row; i++)

    {
        for ( j = 1; i <=row-i; j++)
        {
            printf(" ");

        }
        for ( k= 1; k <=i; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}