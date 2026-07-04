#include<stdio.h>
void insertion_sort(int A[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    printf("Array with insertin sort: ");
        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}