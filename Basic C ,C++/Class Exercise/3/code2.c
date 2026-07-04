#include<stdio.h>
#include<math.h>
int main(){
    double t,pi=3.14159265358979323 ,radians;
    printf("Enter any angle in degree:");
    scanf("%lf",&t);
    radians = t * pi /180.0;
    double result=sin(radians);
    printf("the sin value is: %lf",result);
    return 0;
}