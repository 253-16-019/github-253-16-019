#include<stdio.h>
#include<math.h>
int main(){
    int m,n,isprime,t;
    printf("enter highest and lowest number:");
    scanf("%d %d",&m,&n);

    for(int i=m;i>=n;i--){
        if(i<2){
            isprime=0;
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
            printf("%d ",i);
        }
    }
    return 0;
}