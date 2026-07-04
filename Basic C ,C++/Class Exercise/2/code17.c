#include<stdio.h>
int main(){
    int a,res;
    printf("Enter a num: ");
    scanf("%d",&a);
    res = a << 1;
    // n<<1 -> multiply by 2
    // n<<2 -> multiply by 4
    printf("the num multiply by 2 is :%d",res); 
    return 0;
}