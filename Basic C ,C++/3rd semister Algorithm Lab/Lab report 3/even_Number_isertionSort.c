#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int arr[n];
    int even[n];
    int even_count=0;
    printf("Enter Array Element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even[even_count]=arr[i];
            even_count++;
        }
    }
    for(int i=1;i<even_count;i++){
        int key=even[i];
        int j=i-1;
        while(j>=0 && even[j]>key){
            even[j+1]=even[j];
            j--;
        }
        even[j+1]=key;
    }
    int even_index=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            arr[i]=even[even_index];
            even_index++;
        }
    }
    printf("\nArray with insertin sort: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}