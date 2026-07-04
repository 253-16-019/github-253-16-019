#include<stdio.h>
int main(){
    int n;
    printf("Enter any mark: ");
    scanf("%d",&n);
    if(n>=80) printf(" A Grade");
    else if(n>=70) printf("B Grade");
    else if(n>=60) printf("C Grade");
    else if(n>=40) printf("D Grade");
    else printf("Fail");
    return 0;
}