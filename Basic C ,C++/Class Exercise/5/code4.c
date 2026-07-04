#include<stdio.h>
int main(){
    double x,y;
    printf("Enter two different number:");
    scanf("%lf %lf",&x,&y);
    double min=(x<y) ? x : y ;
    printf("%.2lf is minimun",min);
    return 0;
}