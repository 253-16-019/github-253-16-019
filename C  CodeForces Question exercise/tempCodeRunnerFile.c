#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int num=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>=k){
            num++;
        }
    }
    printf("%d",num);
    return 0;
}