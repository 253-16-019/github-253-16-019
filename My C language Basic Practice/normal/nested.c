#include<stdio.h>
int main(){
    int n;
    printf("Enter a num : ");
    scanf("%d",&n);
    if(n%3==0){
        if(n%5==0){
            printf("the num is divisible by 3 & 5");
        }
        else printf("the num is not devisible by 3 & 5");
    }
    else{
        printf("not divisible");
    }
    return 0;
}
