#include<stdio.h>
#include<math.h>
int main(){
    int isprime,t;
    for(int i=1;i<=100;i++){
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