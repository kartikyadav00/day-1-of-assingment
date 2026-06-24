#include <stdio.h>
#include <stdlib.h>

int findMissingNumber(int *arr, int size, int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += *(arr + i); 
    }

    return expectedSum - actualSum;
}

int main() {
    int size = 4;
    int n = 5; 

    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;
    arr[3] = 5;

    int missing = findMissingNumber(arr, size, n);
    printf("The missing number is: %d\n", missing);

    free(arr);

    return 0;
}