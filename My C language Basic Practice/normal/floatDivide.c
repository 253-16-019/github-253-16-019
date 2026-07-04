#include<stdio.h>
int main(){
    float a,b,res;
    printf("Enter two float number: ");
    scanf("%f %f",&a,&b);
    res=a/b;
    printf("%.2f",res);

    return 0;
}