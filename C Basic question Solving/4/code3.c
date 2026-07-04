#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b) printf("First number %d is maximum",a);
    else if(a<b) printf("Second number %d is maximum",b);
    else if(a=b) printf("the number is equal");
    return 0;
}