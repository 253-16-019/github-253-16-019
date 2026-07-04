#include<stdio.h>
int power(int a,int b){
    int res=1;
    for(int i=1;i<=b;i++){
        res=res*a;
    }
    return res;
}
int main(){
    int a;
    printf("Enter Base:");
    scanf("%d",&a);
    int b;
    printf("Enter Power:");
    scanf("%d",&b);

    int p=power(a,b);
    printf("%d",p);
    return 0;
}