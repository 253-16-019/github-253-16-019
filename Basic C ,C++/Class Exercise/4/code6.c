#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter first number: ");
    scanf("%d",&x);    
    printf("Enter second number: ");
    scanf("%d",&y);    
    printf("Enter third number: ");
    scanf("%d",&z);
    if(x>y){
        if(x>z) printf("first number %d is maximum",x);
        else printf("third number %d is maximum",z);
    }
    else{
        if(y>z) printf("second number %d is maximum",y);
        else printf("third number %d is maximum",z);
    }return 0;
}