#include<stdio.h>
#include<math.h>
int main(){
    double t,radians,result,pi=3.1416;
    printf("Enter a number in degree: ");
    scanf("%lf",&t);
    radians=t* pi/180.0;
    result= 1/sin(radians);
    printf("the cosec(%lf) value is %lf ",t,result);
    return 0;
}