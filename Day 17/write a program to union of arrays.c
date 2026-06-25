#include <stdio.h>

int findUnion(int arr1[], int size1, int arr2[], int size2, int unionArr[]) {
    int uSize = 0;

    for (int i = 0; i < size1; i++) {
        int isDuplicate = 0;
        
        for (int j = 0; j < uSize; j++) {
            if (arr1[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            unionArr[uSize] = arr1[i];
            uSize++;
        }
    }

    for (int i = 0; i < size2; i++) {
        int isDuplicate = 0;
        
        for (int j = 0; j < uSize; j++) {
            if (arr2[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            unionArr[uSize] = arr2[i];
            uSize++;
        }
    }

    return uSize;
}

int main() {
    int arr1[] = {1, 3, 4, 5, 4, 1};
    int arr2[] = {2, 3, 5, 6, 3};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int unionArr[size1 + size2]; 
    
    int unionSize = findUnion(arr1, size1, arr2, size2, unionArr);
    
    printf("Union of the arrays: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}