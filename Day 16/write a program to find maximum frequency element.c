#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return ((int)a - (int)b);
}

int findMaxFrequencyElement(int *arr, int size) {
    if (size == 0) return -1;
    
    qsort(arr, size, sizeof(int), compare);

    int maxElement = *(arr + 0);
    int maxCount = 1;
    int currentCount = 1;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) == *(arr + (i - 1))) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                maxElement = *(arr + (i - 1));
            }
            currentCount = 1; 
        }
    }
    
    if (currentCount > maxCount) {
        maxElement = *(arr + (size - 1));
    }
    
    return maxElement;
}

int main() {
    int size = 7;

    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    arr[5] = 3;
    arr[6] = 2;

    int maxFreqElement = findMaxFrequencyElement(arr, size);
    printf("Maximum frequency element: %d\n", maxFreqElement);

    free(arr);

    return 0;
}