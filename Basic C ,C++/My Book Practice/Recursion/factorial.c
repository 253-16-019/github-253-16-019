#include<stdio.h>
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
    // int fact=1;
    // for(int i=2;i<=n;i++){
    //     fact=fact*i;
    // }
    // return fact;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int res=factorial(n);
    printf("%d",res);
    return 0;
}