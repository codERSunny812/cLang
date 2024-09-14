#include <stdio.h>

int main() {

    int x = 12;         // Integer variable
    short y = 3;        // Short integer variable
    double z = 12.0;    // Double precision floating-point variable
    float a = 12.0;     // Single precision floating-point variable

    // Printing the size of 'int x' in bytes using sizeof operator
    printf("Size of x (int): %d bytes\n", sizeof(x));

    // Correct format specifiers for each variable type:
    printf("Short y: %hd \n",sizeof(y));      // Correct: %hd for short int
    // printf("Int x: %d \n", x);         // Correct: %d for int
    printf("Double z: %lf \n", sizeof(z));     // Correct: %lf for double
    printf("Float a: %f \n", sizeof(a));       // Correct: %f for float

    // Example of printing an ASCII character with a number
    printf("Character for ASCII 65: %c \n", 65);  // Prints 'A'

    return 0;
}
