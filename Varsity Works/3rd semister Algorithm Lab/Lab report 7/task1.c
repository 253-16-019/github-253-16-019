#include<stdio.h>
int partition(int arr[], int low, int high){
    int pivot= arr[high];
    int m= low;
    for(int j=low; j<high; j++){
        if(arr[j]< pivot){
            int temp = arr[m];
            arr[m]= arr[j];
            arr[j]=temp;
            m++;
        }
    }
    int temp = arr[m];
    arr[m]= arr[high];
    arr[high]=temp;
    return m;
}
void quickSort(int arr[], int low, int high){
    if(low<high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}
int main(){
    int n;
    printf("Enter array element: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the element %d:", i+1);
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n-1);
    printf("Sorted Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}