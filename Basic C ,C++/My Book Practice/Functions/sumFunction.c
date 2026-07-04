#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a=5,b=5;
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}