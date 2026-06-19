#include<stdio.h>
bool is_prime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int check_number=29;
    if(is_prime(check_number)){
        printf("%d is a prime number.\n", check_number);
    } else {
        printf("%d is not a prime number.\n", check_number);
    }
    return 0;
}