#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int N, new_size;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Initially allocate memory using malloc
    ptr = malloc(N * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input initial array elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", (ptr + i));
    }

    // Print the initial array
    printf("Array before realloc:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Reallocate memory to a larger size
    printf("Enter the new size (larger than %d): ", N);
    scanf("%d", &new_size);

    // Resize the memory block using realloc
    ptr = realloc(ptr, new_size * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Input new elements in the additional space
    printf("Enter the new array elements:\n");
    for (int i = N; i < new_size; i++) {
        scanf("%d", (ptr + i));
    }

    // Print the resized array
    printf("Array after realloc:\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Free the memory
    free(ptr);

    return 0;
}
