#include <stdio.h>

int main() {
   int arr[] = {1, 2, 3};
   int *ptr = arr;  // Points to the first element of the array
   int *ptr2 = &arr[0];
    printf("Value stored at ptr: %d\n", *ptr);  // Outputs 10
    printf("Address stored in ptr: %p\n", ptr); // Outputs address of x
    printf("Address stored in ptr2: %p\n", ptr2); // Outputs address of x

    return 0;
}
