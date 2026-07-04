#include<stdio.h>
#include<ctype.h>
int main(){
    char n;
    printf("The lower case is: ");
    scanf("%c",&n);
    char x = toupper(n);
    printf("The Upper case is : %c",x);
    return 0;
}