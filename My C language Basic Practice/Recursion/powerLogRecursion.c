#include<stdio.h>
int power_log(int a,int b){
    if(b==1) return a;
    int x=power_log(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
int main(){
    int a;
    printf("Enter base:");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);

    int p=power_log(a,b);
    printf("%d",p);
    return 0;
}