#include<stdio.h>
#include<string.h>
int main(){
    char ch[30];
    printf("Enter a sentence : ");
    scanf("%[^\n]s",ch);
    printf("%s",ch);
    return 0;
}