#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum;
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    if(a==n){
            printf("finonacci number");
    }
    else{
            printf("not a fibonacci number");
    }
    return 0;
} 