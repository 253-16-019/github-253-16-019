#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a=2;
    int b=9;
    swap(a,b);
    printf("%d %d",a,b);
    return 0;
}