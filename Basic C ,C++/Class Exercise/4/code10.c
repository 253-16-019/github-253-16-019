#include<stdio.h>
int main(){
    int n;
    printf("Enter any mark: ");
    scanf("%d",&n);
    if(n>=80) printf("First Division");
    else if(n>=60) printf("Second Division");
    else if(n>=40) printf("Third Division");
    else printf("Fail");
    return 0;
}