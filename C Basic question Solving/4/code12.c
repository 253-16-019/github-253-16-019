#include<stdio.h>
int main(){
    int n;
    printf("Enter any year: ");
    scanf("%d",&n);
    if( (n%4==0) || (n%100==0) || (n%400==0) ) printf("the year is leap year");
    else printf("the year is not leap year");
    return 0;
}