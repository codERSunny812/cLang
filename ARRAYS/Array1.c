#include<stdio.h>

int main(){

int arr[4]={1,2,3,4}; // array initlization

int numbers[5];
    
    // Input
    for(int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Output
    printf("Array elements are: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}