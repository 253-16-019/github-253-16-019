#include<stdio.h>
#include<math.h>
int main(){
    double t,pi=3.14159265358979323 ,radians;
    printf("Enter any angle in degree:");
    scanf("%lf",&t);
    radians = t * M_PI /180.0;
    double result=tan(radians);
    printf("the tan value is: %lf",result);
    return 0;
}