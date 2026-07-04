#include<stdio.h>
#include<math.h>
int main(){
    float n;
    printf("Enter a number: ");
    scanf("%f",&n);
    printf("log10(%f) is %0.2lf",n,log10(n));
    return 0;
}