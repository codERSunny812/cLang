#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *ptr;

    printf("Creating an array using calloc function.\n");

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // calloc allocates memory and initializes it to zero
    ptr = calloc(N, sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program if calloc fails
    }

    // Input array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", (ptr + i));
    }

    // Printing the values of the array
    printf("Printing the values of the array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);

    return 0;
}
