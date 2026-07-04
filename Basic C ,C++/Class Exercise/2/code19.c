#include<stdio.h>
int main(){
    int a,res;
    printf("Enter a num:");
    scanf("%d",&a);
    res= a & (4-1);
    // a%4 = a&3 
    // %2 = num & 1
    // %4 = num & 3
    // %8 = num & 7
    printf("number mod by 4 is %d",res);
    return 0;
}