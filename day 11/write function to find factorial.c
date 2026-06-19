#include<stdio.h>
int find_factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*find_factorial(n-1);
}
int main(){
int fact_num=12;
int result=find_factorial(fact_num);
printf("Factorial of %d is %d",fact_num,result);
return 0;
}