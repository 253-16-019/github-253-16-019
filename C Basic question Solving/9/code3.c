#include<stdio.h>
int main(){
    int n;
    printf("Enter any integer: ");
    scanf("%d",&n);
    int ld=0;
    int reverse=0;
    while(n!=0){
        ld=n%10;
        reverse=reverse*10;
        reverse=reverse+ld;
        n=n/10;
    }
    printf("the reverse number is:%d",reverse);
    return 0;
}