#include<stdio.h>
int isperfect(int n){
    if(n <= 0) return 0;
    int sum = 0;
    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum == n;
}
int main(){
    int n;
    printf("Enter a number:");
    if(scanf("%d", &n) != 1) 
        return 1;
    if(isperfect(n)){
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}