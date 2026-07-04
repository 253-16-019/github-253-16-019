#include<stdio.h>
int main(){
    char x[30];
    printf("enter your name:");
    scanf("%[^\n]",x);
    printf("%s",x);
    return 0;
}