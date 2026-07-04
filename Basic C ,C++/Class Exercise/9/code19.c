#include<stdio.h>
int main(){
    int n,isprime;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<2){
        isprime=0;
    }
    else{
        isprime=1;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
        }
    }
    if(isprime==1){
        printf("Prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}