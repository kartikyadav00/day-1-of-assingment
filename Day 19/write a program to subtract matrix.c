#include <stdio.h>

int main() {
    int n;

    printf("Enter the order of the matrices (n x n): ");
    scanf("%d", &n);

    int mat1[n][n], mat2[n][n], diff[n][n];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}