#include<stdio.h>
int main(){
    unsigned int a,b,res;
    printf("Enter a & b :");
    scanf("%u %u",&a,&b);
    res= a & b;
    //AND:
    //0 0 - 0
    //0 1 - 0
    //1 0 - 0 
    //1 1 - 1
    printf("the bitwise AND num is:%u",res);
    return 0;
}