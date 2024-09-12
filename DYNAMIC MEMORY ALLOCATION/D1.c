#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *ptr;

    printf("Creating an array using malloc function.\n");

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // malloc returns a pointer to the allocated memory block
    ptr = malloc(sizeof(int) * N);

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program if malloc fails
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
