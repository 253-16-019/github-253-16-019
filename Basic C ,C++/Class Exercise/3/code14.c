#include<stdio.h>
int main(){
    int x,y;
    printf("Enter base: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&y);
    int power=1;
    for(int i=1;i<=y;i++){
        power=power*x;
    }
    printf("%d to the power %d is %d",x,y,power);
    return 0;
}