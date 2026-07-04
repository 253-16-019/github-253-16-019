#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[1000];
    int p=0;
    while(n>0){
        arr[p]=n%2;
        n=n/2;
        p++;
    }
    printf("Equivalent Binary Number:");
    for(int i=p-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}