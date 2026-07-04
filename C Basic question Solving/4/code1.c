#include<stdio.h>
int main(){
    int n;
    printf("enter a integer value: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("this number is Even");
    }
    else{
        printf("this number is odd");
    }
    return 0;
}