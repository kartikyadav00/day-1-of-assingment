#include <stdio.h>

int main() {
    int arr1[] = {4, 2, 9, 6, 2, 3, 10};
    int arr2[] = {2, 6, 11, 2, 8, 4, 15, 6};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int common[100];
    int k = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                int already_added = 0;
                
                for (int x = 0; x < k; x++) {
                    if (arr1[i] == common[x]) {
                        already_added = 1;
                        break;
                    }
                }
                
                if (!already_added) {
                    common[k] = arr1[i];
                    k++;
                }
                break; 
            }
        }
    }

    if (k == 0) {
        printf("No common elements found.\n");
    } else {
        printf("Common elements are: ");
        for (int i = 0; i < k; i++) {
            printf("%d ", common[i]);
        }
        printf("\n");
    }

    return 0;
}