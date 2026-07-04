#include<stdio.h>
int main(){
    int x,y,lcm,max;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    max=(x>y)? x:y;
    while(1){
        if(max%x==0 && max%y==0){
            lcm=max;
            break;
        }
        max++;
    }
    printf("the least common multiple is %d",lcm);
    return 0;
}