#include<stdio.h>
int comparison=0;
int search(int arr[],int min,int max,int x){
    if(min>max){
        return -1;
    }
    comparison++;
    int mid=(min+max)/2;
    if(arr[mid]==x){
        return mid;
    }
    if(arr[mid]<x){
        return search(arr,mid+1,max,x);
    }
    return search(arr,min,mid-1,x);
}
int main(){
    int n;
    printf("Enter Array Size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter The Search Value: ");
    scanf("%d",&x);

    int idx=search(arr,0,n-1,x);

    if(idx!=-1) printf("\nElement at %d index\n",idx);
    else printf("Element not found");

    printf("Number of Comparisons %d ",comparison);
    return 0;
}