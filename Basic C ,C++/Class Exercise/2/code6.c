#include<stdio.h>
int main(){
    int a,b,r;
    printf("Enter a & b (a>b):");
    scanf("%d %d",&a,&b);
    r=a%b;
    printf("the reminder is:%d",r);
    return 0;
}