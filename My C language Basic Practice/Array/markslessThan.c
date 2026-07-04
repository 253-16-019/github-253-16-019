#include<stdio.h>
int main(){
    int mark[10]={95,75,30,25,100,50,65,89,97,30};
    for(int i=0;i<10;i++){
        if(mark[i]<35){
            // printf("the position of number is %d\n",i+1);
            printf("the numbers is: %d\n",mark[i]);
        }
    }
    return 0;
}