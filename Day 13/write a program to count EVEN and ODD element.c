#include<stdio.h>
int main(){
    int size,even_count=0,odd_count=0;

    printf("Enetr the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Element%delements:\n",size);
    for(int i=0;i<size;i++){
        printf("Element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even_count++;}
        else{
            odd_count++;
        }
    }
    printf("\ntotal even elements:%d\n",even_count);
     printf("\ntotal odd elements:%d\n",odd_count);
     
     return 0;
}