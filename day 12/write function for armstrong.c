#include<stdio.h>
#include<math.h>
int isarmstrong(int num){
    int original=num;
    int sum=0;
    int temp=num;
    int digits=0;
    while(temp>0){
        digits++;
        temp/=10;
    }
    while(num>0){
        int remainder=num%10;
        sum+=round(pow(remainder,digits));
        num/=10;
    }
    return (sum==original);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isarmstrong(num)){
        printf("%d is an Armstrong number.\n",num);
    }else{
        printf("%d is not an Armstrong number.\n",num);
    }
    return 0;
}
