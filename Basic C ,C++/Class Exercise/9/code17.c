#include<stdio.h>
int main(){
    int n,r;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n>9){
        r=0;
        while(n>0){
            r=r+n%10;
            n=n/10;
        }
        n=r;
    }
    printf("%d",n);
    return 0;
}