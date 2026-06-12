#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,sum=0,digit=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    int t=n;
    while(t>0)
    {
        digit++;
        t=t/10;
    }
    temp=n;
    while(temp>0)
    {
        int d=temp%10;
        sum=sum+pow(d,digit);
        temp=temp/10;

    } printf(sum==n?"Armstrong number":"Not an Armstrong number");
     return 0;
}