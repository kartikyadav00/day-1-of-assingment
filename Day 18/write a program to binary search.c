#include <stdio.h>

int main() {
    int n, temp, min_idx, search_key;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    printf("Enter the element to search for: ");
    scanf("%d", &search_key);

    int low = 0;
    int high = n - 1;
    int mid;
    int found_index = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == search_key) {
            found_index = mid;
            break;
        }
        else if (arr[mid] < search_key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found_index != -1) {
        printf("Element %d found at index %d.\n", search_key, found_index);
    } else {
        printf("Element %d not found in the array.\n", search_key);
    }

    return 0;
}