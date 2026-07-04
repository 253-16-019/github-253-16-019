#include<stdio.h>
int main(){
    double a,b,max;
    printf("Enter two numbers: ");
    scanf("%lf %lf",&a,&b);
    max=(a>b) ? a:b;
    printf("max=%.2lf",max);
    return 0;
}