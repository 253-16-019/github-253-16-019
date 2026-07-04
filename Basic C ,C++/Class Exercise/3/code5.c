#include<stdio.h>
#include<math.h>
int main(){
    double t,pi=3.14159265358979323 ,radians;
    printf("Enter any angle in degree:");
    scanf("%lf",&t);
    radians = t * pi /180.0;
    double result=1/tan(radians);
    printf("the cot(%lf) value is: %.2lf",t,result);
    return 0;
}