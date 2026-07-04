#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the number that you want to delete: ");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            for(int j=i+1;j<n;j++){
                arr[j-1]=arr[j];
            }
            n--; 
            i--;   
        }          
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}