#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;  // Pointer to x

    printf("Value of x: %d\n", x);         // Outputs 10
    printf("Address of x: %p\n", &x);      // Outputs address of x
    printf("Value stored at ptr: %d\n", *ptr);  // Outputs 10
    printf("Address stored in ptr: %p\n", ptr); // Outputs address of x

    return 0;
}
