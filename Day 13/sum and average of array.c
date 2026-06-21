#include<stdio.h>
int main() {
    int n,i;
    float sum=0.0,average;
    printf("Enter the number of the element in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d element:\n",n);
    for(i=0;i<n;i++){
    printf("enter %d:",i+1);
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
  average=sum\n;
  printf("\nsum of the array element=%.2f\n",sum);
printf("\naverage of the array element=%.2f\n",average);
return 0;
}
