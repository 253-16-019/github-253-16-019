#include<stdio.h>
int main(){
    float C,F;
    printf("Enter the Celcius temp:");
    scanf("%f",&C);
    F=((9*C/5)+32);
    printf("the temperature in fahrenheit is:%f",F);
    return 0;
}