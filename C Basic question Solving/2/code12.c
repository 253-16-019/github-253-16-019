#include<stdio.h>
int main(){
    float C,F;
    printf("Enter the fahrenheit temp:");
    scanf("%f",&F);
    C=((F-32)*5)/9;
    printf("the Calcius temp is:%f",C);
    return 0;
}