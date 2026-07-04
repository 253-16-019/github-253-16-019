#include<stdio.h>
#include<math.h>
int main(){
    float n;
    printf("Enter a number: ");
    scanf("%f",&n);
    printf("log(%f) is %0.2lf",n,log(n));
    return 0;
}