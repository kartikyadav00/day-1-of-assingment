#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return ((int)a - (int)b);
}

int removeDuplicates(int *arr, int size) {
    if (size == 0 || size == 1) return size;

    qsort(arr, size, sizeof(int), compare);

    int uniqueIndex = 0;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) != *(arr + uniqueIndex)) {
            uniqueIndex++;
            *(arr + uniqueIndex) = *(arr + i);
        }
    }
    return uniqueIndex + 1; 
}

int main() {
    int size = 7;

    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    arr[0] = 4;
    arr[1] = 2;
    arr[2] = 2;
    arr[3] = 1;
    arr[4] = 4;
    arr[5] = 3;
    arr[6] = 1;

    int newSize = removeDuplicates(arr, size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    free(arr);

    return 0;
}