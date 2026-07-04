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
        if(x>z){
            if(y>z) printf("midium number is %d",y); // z<y<x
            else printf("midium number is %d",z); // y<z<x
        }
        else printf("midium number is %d",x); // y<x<z
    }
    else{ // y>x
        if(y>z){
            if(x>z) printf("midium number is %d",x);// y>x>z , 
            else printf("midium number is %d",z);// y>z>x
        }
        else printf("midium number is %d",y); // z>y>x
    }
    return 0;
}