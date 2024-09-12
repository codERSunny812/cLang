// program to delete any element from array from  the end and from any given index
/*#include<stdio.h>
int main()
{
    int array[5],n=5,upperbound=n-1,i;
     for(i=0;i<5;i++)
{
    array[i]=i+3;

}
for(i=0;i<5;i++)
{
    printf( " %d ",array[i]);

}
printf("\n\n\n\n");
upperbound--;
n--;
for(i=0;i<n;i++)
{
    printf( " %d ",array[i]);

}
return 0;
}

*/

// now we have to delete the element from any given index 
#include<stdio.h>
int main()
{
    int a[6] ,i,n,upperbound=n-1,element; 
    n=6;    
    for ( i = 0; i<n; i++)
    {
        a[i]=i+2;      // it'll give value to the arrays
        
    }
    for(i=0;i<n;i++)
    printf( " %d ",a[i]); // print the original array as it's 
    

    printf("\n \n"); // use just to provide a blank space you j
    printf("enter the index from which you have to delete the element  ");
    scanf("%d",&element);

    
for(int k=element;k<upperbound;k++) // this loop is used to change th array element 
{
    a[k]=a[k+1];
}
upperbound--;
n--;

for(i=0;i<n;i++)
printf(" %d ",a[i]);
return 0;
} 
