#include<stdio.h>
int main(){
    // int arr[7]={-9,9,4,2,10,7,2};
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the max value is %d",max);
    return 0;
}