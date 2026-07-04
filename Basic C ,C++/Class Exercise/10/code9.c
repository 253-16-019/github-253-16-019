#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p;
    printf("Enter the position(Index) that you want to insert: ");
    scanf("%d",&p);

    if(p<0 || p>n){
        printf("Insert is imposible");
    }
    else{
        for(int i=n-1;i>=p;i--){
            arr[i+1]=arr[i];                  
        }
        printf("enter a number that you want to insert:");
        scanf("%d",&arr[p]);
        n++;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}