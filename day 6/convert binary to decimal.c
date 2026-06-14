#include<stdio.h>
int main() {
    int temp,binarynumber,decimalnumber=0,base=1,remainder;
    printf("enter a binary number");
    scanf("%d",&binarynumber);
    temp=binarynumber;
    while(temp>0){
        remainder=temp%10;
        decimalnumber=decimalnumber+remainder*base;
        temp=temp/10;
        base*=2;
    }
    printf("\nbinary number:%d\ndecimal equivalent number:%d",binarynumber,decimalnumber);
    return 0;
}