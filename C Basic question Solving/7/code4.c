#include<stdio.h>
int main(){
    int n;
    printf("enter n th term number:");
    scanf("%d",&n);
    int sum=4;
    for(int i=2;i<=n;i++){
        sum=sum+8;
    }
    printf("%d",sum);
    return 0;
}