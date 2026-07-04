#include<stdio.h>
int main(){
    int n;
    printf("enter any number you get in exam:");
    scanf("%d",&n);
    if(n>=40) printf("you are pass");
    else if(n<40) printf("you are fail");
    return 0;
}