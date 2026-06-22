#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100];
    int size, i;
    int first, second;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size < 2) {
        printf("Error: Array must contain at least 2 elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    first = INT_MIN;
    second = INT_MIN;

    for (i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no distinct second largest element (all elements might be identical).\n");
    } else {
        printf("The largest element is: %d\n", first);
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}