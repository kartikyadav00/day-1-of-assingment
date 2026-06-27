#include <stdio.h>

int main() {
    int n;

    printf("Enter the order of the matrices (n x n): ");
    scanf("%d", &n);

    int mat1[n][n], mat2[n][n], sum[n][n];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < j; j++) { // Fix: j < n
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}