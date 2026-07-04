#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int last_digit=0;
    int result=0;
    while(n!=0){
        last_digit=n%10;
        result=result+last_digit;
        n=n/10;
    }
    printf("sum of digits is %d",result);
    return 0;
}