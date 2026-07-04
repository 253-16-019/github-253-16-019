#include<stdio.h>
void greeting(int n){
    for(int i=1;i<=n;i++){
        printf("Good Morning\n");
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    greeting(n);
}