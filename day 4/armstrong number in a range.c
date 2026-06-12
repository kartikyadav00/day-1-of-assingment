#include<stdio.h>
#include<maths.h>
int main() {
    int low,high,number,original number,rem,count=0;
    double result=0.0;
    printf("enter two number interval:");
    scanf("%d%d",&low,&high);
    printf("armstrong number between %d and %d are:",low,high);
    if(high<low){
        high+=low;
        low=high-low;
        high-=low;
    
    } for(number=low;number<=high;number++){
        original number=number;
        while(original number!=0){
            rem=original number%10;
            result+=pow(rem,count);
            original number/=10;
            count++;
        }
        if((int)result==number){
            printf("%d ",number);
        }
        count=0;
        result=0.0;
    }
}