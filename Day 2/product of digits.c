#include<stdio.h>

int main() 
{
    int num,rem;
    intproduct=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        intproduct=intproduct*rem;
        temp=temp/10;
    }   printf("The product of the digits of %d is: %d",num,intproduct);
     return 0;      
}