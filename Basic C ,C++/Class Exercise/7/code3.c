#include<stdio.h>
int main(){
    int n;
    printf("enter n th term number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+2*i-1;
    }
    printf("%d",sum);
    return 0;
}