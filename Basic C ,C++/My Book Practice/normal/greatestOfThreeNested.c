#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER 1ST number ");
    scanf("%d",&a);
    printf("ENTER 2nd number ");
    scanf("%d",&b);
    printf("ENTER 3rd number ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest",a);
        }
        else printf("%d is gratest",c);
    }
    else{
        if(b>c){
            printf("%d is gratest",b);
        }
        else printf("%d is gratest",c);
    }
    return 0;
}