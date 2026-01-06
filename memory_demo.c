#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int n = 5;

    numbers = (int *)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        numbers[i] = (i + 1) * 10;
    }

    printf("Allocated memory values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    free(numbers);
    printf("\nMemory freed successfully\n");

    return 0;
}
