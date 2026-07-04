#include<stdio.h>
int main(){
    int n;
    printf("Enter your number that you got :");
    scanf("%d",&n);
    if(n>=80){
        printf("you are in A grade");
    }
    else if(n>=60){
        printf("you are in B grade");
    }
    else if(n>=40){
        printf("you are in C grade");
    }
    else{
        printf("you are Fail");
    }
    return 0;
}