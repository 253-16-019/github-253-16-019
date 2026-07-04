#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int min;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=1;i<n;i++){
       if(min>arr[i]){
            min=arr[i];
       }
    }
    printf("Min=%d",min);
    return 0;
}