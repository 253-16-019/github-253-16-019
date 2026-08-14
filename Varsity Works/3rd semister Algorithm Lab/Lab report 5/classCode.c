#include <stdio.h>

void merge(int arr[], int l, int m, int h)
{
    int i = l, j = m + 1, k = 0;
    int temp[h-l+1];
 
    while(i <= m && j <= h)
    {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while(i <= m)
        temp[k++] = arr[i++];
 
    while(j <= h)
        temp[k++] = arr[j++];
 
    for(i = l, k = 0; i <= h; i++, k++)
        arr[i] = temp[k];
}
void mergeSort(int arr[], int l, int h)
{
    if(l < h)
    {
        int m = (l + h) / 2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
 
        merge(arr, l, m, h);
    }
}
int main()
{
    int n, arr[50];
 
    printf("Enter Size: ");
    scanf("%d", &n);
 
    printf("Enter Elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
 
    mergeSort(arr, 0, n-1);
 
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
 
    return 0;
}