#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides of num :");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Valid Trangle");
    }
    else printf("invalid trangle");
    return 0;
}