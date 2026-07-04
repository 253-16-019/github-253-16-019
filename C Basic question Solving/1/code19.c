#include<stdio.h>
int main(){
    char x[30];
    printf("enter your text:");
    scanf("%[^\n]",x);
    printf("your text is:%s",x);
    return 0;
}