#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two different number:");
    scanf("%d %d",&x,&y);
    int min=(x<y) ? x : y ;
    printf("%d is minimun",min);
    return 0;
}