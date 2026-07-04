#include<stdio.h>
#include<math.h>
int main(){
    float n;
    printf("Enter a number: ");
    scanf("%f",&n);
    printf("the e to the power %f is %lf",n,exp(n));
    return 0;
}