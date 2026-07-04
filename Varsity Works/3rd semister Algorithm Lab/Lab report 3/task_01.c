#include<stdio.h>
int comparisons=0;
int shifts=0;
void insertion_sort(int a[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j >= 0){
            comparisons++;
            if(a[j] > key){
                a[j + 1] = a[j];
                shifts++;
                j--;
            }
            else break;
        }
        a[j+1]=key;
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
    printf("\nTotal Comparisons: %d ",comparisons);
    printf("\nTotal shifts: %d ",shifts);
    return 0;
}