#include<stdio.h>
int main(){
    int n,i,j,pos,v;
    printf("Enter The Number of Element\n: ");
    scanf("%d",&n);
    printf("Enter Element: ");
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter array position:");
    scanf("%d",&pos);
    printf("\nEnter Insert Value:");
    scanf("%d",&v);
    if(pos>=n){
        arr[n]=v;
    }
    else{
        for(j=n;j>pos;j--){
            arr[j]=arr[j-1];
        }
        arr[pos]=v;
    }
    printf("The Present Array is: ");
    for(i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}