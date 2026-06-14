#include<stdio.h>
int main() {
    int decimal,i;
    int binary[100];
    printf("Enter a decimal number");
    scanf("%d",&decimal);
    if (decimal == 0) {
        printf("Binary: 0\n");
        return 0;
    }
    i=0;
    while(decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++
    }
    printf("binary equivalent:");
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }printf("\n");
    return 0;
}
