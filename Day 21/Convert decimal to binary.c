#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    int binary[32];
    int index = 0;

    // Extract binary digits
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    // Print binary digits in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("=== Decimal to Binary Converter ===\n");
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    decimalToBinary(decimal);

    return 0;
}
