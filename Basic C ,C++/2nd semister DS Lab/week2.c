#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array num : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter The Delete Position: ");
    scanf("%d",&pos);
    pos=pos-1;
    for(int j=pos;j<=n-1;j++){
        arr[j]=arr[j+1];
    }
    printf("The Result is: ");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;   
}