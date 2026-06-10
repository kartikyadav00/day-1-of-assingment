#include<stdio.h>

int main()
{
    int p,r,s=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(p==s){
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
    getch();
}