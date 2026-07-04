#include<stdio.h>
int main(){
    double a,b;
    printf("Enter first number: ");
    scanf("%lf",&a);
    printf("Enter second number: ");
    scanf("%lf",&b);
    if(a<b) printf("First number %.2lf is minimum",a);
    else if(a>b) printf("Second number %.2lf is minimum",b);
    else if(a=b) printf("the number is equal");
    return 0;
}