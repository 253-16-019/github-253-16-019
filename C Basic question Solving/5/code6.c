#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("enter three different number: ");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)? (a>c) ? a:b: (b>c)? b:c;
    printf("%d is maximum",max);
    return 0;
}