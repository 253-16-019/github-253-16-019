#include<stdio.h>
int main(){
    long long N,M,lm,ln;
    scanf("%lld%lld",&N,&M);
    ln=N%10;
    lm=M%10;
    printf("%lld",ln+lm);
    return 0;
}