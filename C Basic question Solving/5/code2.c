#include<stdio.h>
int main(){
    int a,b,max;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    // max=(a>b) ? a:b;
    // printf("max=%d",max);
    a>b? printf("%d is max",a):printf("%d is max",b);
    return 0;
}