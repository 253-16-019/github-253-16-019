#include<stdio.h>
#include<math.h>
int main(){
    int n,isprime,t;
    printf("enter the highest number:");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++){
        if(i<2){
            continue;
        }
        isprime=1;
        t=sqrt(i);
        for(int j=2;j<=t;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            count=count+i;
        }
    }
    printf("the sum of prime number is:%d",count);
    return 0;
}