#include<stdio.h>
int main(){
    int a,res;
    printf("Enter a num: ");
    scanf("%d",&a);
    res = a>>1;
    // n>>1 -> divided by 2
    // n>>2 -> divided by 4
    printf("the num divided by 2 is :%d",res);    
    return 0;
}