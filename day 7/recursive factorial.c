#include<stdio.h>
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
int main(){
    int number= 5;
    printf("Factorial of %d is %d", number, factorial(number));
 return 0;
}
