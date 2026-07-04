#include<stdio.h>
int sum(int n){
    if(n<=0) return 0;
    int fact=n+sum(n-1);
    return fact;
}
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int fact=sum(n);
    printf("%d",fact);
    return 0;
}
