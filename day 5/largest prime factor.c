#include<stdio.h>
int main() {
    int num;
    int largest_factor=1;
    printf(Enter a number: ");
    scanf("%d", &num);
    int original_num = num;
    while (num % 2 == 0) {
        largest_factor = 2;
        num /= 2;
    }
        for(int i=3;i*i<=num;i+=2){
            while(num%i==0){
                largest_factor=i;
                num/=i;
            }
        }
    if(num>2){
        largest_factor=num;
    }
        printf("The largest prime factor of %d is %d\n", original_num, largest_factor);
    return 0;
}