#include<stdio.h>
int main(){
    int x,y;
    printf("enter x & y :");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("the point is origin");
    }
    else if(x==0){
        printf("lies on Y-Axis");
    }
    else if(y==0){
        printf("lies on X-axis");
    }
    else{
        printf("it doesn't lies on any axis");
    }
    return 0;
}