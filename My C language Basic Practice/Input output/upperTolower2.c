#include<stdio.h>
int main(){
    char a;
    printf("The upper case is : ");
    scanf("%c",&a);
    int x=(int)a;
    int ch= x-32;
    char lower =(char)ch;
    printf("the lower case is :%c",lower);
    return 0;
}