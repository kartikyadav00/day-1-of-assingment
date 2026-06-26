#include <stdio.h>

int main() {
    int n, temp, max_idx;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort in Descending Order
    for (int i = 0; i < n - 1; i++) {
        max_idx = i; 
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) { 
                max_idx = j; 
            }
        }
        
        if (max_idx != i) {
            temp = arr[i];
            arr[i] = arr[max_idx];
            arr[max_idx] = temp;
        }
    }

    printf("Sorted array in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}