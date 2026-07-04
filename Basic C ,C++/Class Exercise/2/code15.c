#include<stdio.h>
int main(){
    int a,b,res;
    printf("Enter a & b :");
    scanf("%d %d",&a,&b);
    res= a ^ b;
    //E-OR:
    //0 0 - 0
    //0 1 - 1
    //1 0 - 1 
    //1 1 - 0
    printf("the bitwise E-OR num is:%d",res);
    return 0;
}