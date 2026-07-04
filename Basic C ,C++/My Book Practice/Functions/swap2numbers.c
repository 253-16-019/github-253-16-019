#include<stdio.h>
int main(){
    int a;
    printf("Enter a=");
    scanf("%d",&a);
    int b;
    printf("Enter b=");
    scanf("%d",&b);

    // int temp=a;
    // a=b;
    // b=temp;

    // without 3rd variable:
    a=a+b;
    b=a-b;
    a=a-b;

    printf("the changed value of a & b is %d , %d",a,b);
    return 0;
}