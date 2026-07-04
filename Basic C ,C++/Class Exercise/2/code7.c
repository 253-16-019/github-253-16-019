#include<stdio.h>
int main(){
    float r,pie,area;
    pie=3.1416;
    printf("Enter radius:");
    scanf("%f",&r);
    area=pie*r*r;
    printf("the area of circle is :%f",area);
    return 0;
}