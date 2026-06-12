#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    if(n==1) printf("0");
    else if(n==2) printf("0 1");
    else{
        printf("0 1 ");
        for(i=3;i<=n;i++){
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    } return 0;
}