#include<stdio.h>
int occurence1(int arr[],int min,int max,int X){
    if(min>max) return -1;

    int mid=(min+max)/2;
    if(arr[mid]==X){
        int left=occurence1(arr,min,mid-1,X);
        if(left==-1){
            return mid;
        }
        else{
            return left;
        }
    }
    if(X<arr[mid]){
        return occurence1(arr,min,mid-1,X);
    }
    return occurence1(arr,mid+1,max,X);
}
int occurence2(int arr[],int min,int max,int X){
    if(min>max) return -1;

    int mid=(min+max)/2;
    if(arr[mid]==X){
        int right=occurence2(arr,mid+1,max,X);
        if(right==-1){
            return mid;
        }
        else{
            return right;
        }
    }
    if(X<arr[mid]){
        return occurence2(arr,min,mid-1,X);
    }
    return occurence2(arr,mid+1,max,X);
}
int main(){
    int n;
    printf("Enter The Number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order: \n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int X;
    printf("Enter the number to search: ");
    scanf("%d", &X);

    int first=occurence1(arr,0,n-1,X);
    int last=occurence2(arr,0,n-1,X);

    if(first==-1){
        printf("Element Not Found");
    }
    else{
        printf("First Occurence: %d\n",first);
        printf("Last Occurence: %d\n",last);
        printf("Total Occurence: %d\n",last-first+1);
    }
    return 0;
}