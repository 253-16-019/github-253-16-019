#include<stdio.h>
#include<math.h>
int main(){
    int n,isprime,count=0,t;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i<2){
            continue;;
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
            count++;
        }
    }
    printf("%d",count);
    return 0;
}