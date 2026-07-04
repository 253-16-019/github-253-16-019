#include<stdio.h>
#include<math.h>
int main(){
    double n,pi=3.14159265358979323;
    printf("Enter any value: ");
    scanf("%lf",&n);
    double result= asin(1.0/n)*180.0/pi;
    printf("cosec inverse(%.2lf) = %.2lf degree",n,result);
    return 0;
}