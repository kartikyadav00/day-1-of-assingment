#include<stdio.h>
int ispalindrome(int num){
    int original=num, reversed=0, remainder;
    while(num>0){
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    return original==reversed;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(ispalindrome(num)){
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}