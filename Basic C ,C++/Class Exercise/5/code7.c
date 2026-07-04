#include<stdio.h>
void main(){
    int a,b,c,min;
    printf("enter three different number: ");
    scanf("%d%d%d",&a,&b,&c);
    min=(a<b)? (a<c)? a:b:(b<c)? b:c;
    printf("%d is minimum",min);
}