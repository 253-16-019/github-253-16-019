#include<stdio.h>
int main(){
    int a=25;
    int*x=&a;
    int**y=&x; // akta * use korle gurbage value dibe;
    printf("%d\n%d\n%d",a,*x,**y);
    return 0;
}