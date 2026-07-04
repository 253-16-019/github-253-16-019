#include<stdio.h>
int main(){
    int a,b,res;
    printf("Enter a & b :");
    scanf("%d %d",&a,&b);
    res= a | b;
    //OR:
    //0 0 - 0
    //0 1 - 1
    //1 0 - 1 
    //1 1 - 1
    printf("the bitwise or num is:%d",res);
    return 0;
}