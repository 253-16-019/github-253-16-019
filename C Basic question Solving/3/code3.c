#include<stdio.h>
#include<math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323
#endif
int main(){
    double t,radians;
    printf("Enter any angle in degree:");
    scanf("%lf",&t);
    radians = t *  M_PI / 180.0;
    double result=cos(radians);
    printf("the cos value is: %.2lf",result);
    return 0;
}