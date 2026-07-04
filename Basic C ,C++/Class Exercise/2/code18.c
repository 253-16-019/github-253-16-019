#include<stdio.h>
int main(){
    int a,res;
    printf("Enter a num: ");
    scanf("%d",&a);
    res = (a << 2) + a ;
    // n<<1 / n*2 -> multiply by 2
    // n<<2 / n*4 -> multiply by 4
    printf("the num multiply by 5 is :%d",res); 
    return 0;
}