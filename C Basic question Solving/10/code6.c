#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
       sum+=arr[i];
    }
    int avg=sum/n;
    printf("Average of array is : %d ",avg);
    return 0;
}