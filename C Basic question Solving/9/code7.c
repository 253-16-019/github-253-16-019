#include<stdio.h>
int main(){
    int x,y,gcd;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    for(int i=1;i<=x && i<=y;i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    printf("the greatest common divisor is %d",gcd);
    return 0;
}