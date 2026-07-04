#include<stdio.h>
int main(){
    int a,b,c,mid;
    printf("enter three differnt number: ");
    scanf("%d%d%d",&a,&b,&c);
    mid=(a>b)? (a>c)? (b>c)? b:c:a: (b>c)? (a>c)? a:c:b;
    printf("%d is medium",mid);
    return 0;
}