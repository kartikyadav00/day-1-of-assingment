#include <stdio.h>

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int visited[size];
    
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    printf("Duplicate elements in the array: ");
    
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue; 
        }

        int isDuplicate = 0;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                visited[j] = 1; 
            }
        }

        if (isDuplicate) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

