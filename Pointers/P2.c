#include <stdio.h>

int main() {
    int x = 10;        // A regular integer variable
    int *p = &x;       // Pointer to the integer x
    int **pp = &p;     // Pointer to the pointer p

    // Print the values and addresses
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value of p (address of x): %p\n", (void*)p);
    printf("Address of p: %p\n", (void*)&p);
    printf("Value of pp (address of p): %p\n", (void*)pp);
    printf("Address of pp: %p\n", (void*)&pp);

    // Accessing the value through pointer to pointer
    printf("Value of x through pp: %d\n", **pp);


   

    return 0;
}
