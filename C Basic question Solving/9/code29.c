#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum;
    for(int i=1;i<=n;i++){
        printf("%d ",b);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}