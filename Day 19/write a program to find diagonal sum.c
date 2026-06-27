#include <stdio.h>

int main() {
    int n;
    int principal_sum = 0;
    int secondary_sum = 0;

    printf("Enter the order of the matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        principal_sum += mat[i][i];
        secondary_sum += mat[i][n - 1 - i];
    }

    printf("Sum of principal diagonal: %d\n", principal_sum);
    printf("Sum of secondary diagonal: %d\n", secondary_sum);

    return 0;
}