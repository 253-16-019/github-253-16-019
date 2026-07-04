#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("The upper line :");
    scanf("%c",&ch);
    char lower = tolower(ch);
    printf("\nThe lower line is : %c",lower);
    return 0;
}