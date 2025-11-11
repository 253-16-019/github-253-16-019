#include<stdio.h>
int main(){
    int n,i,status=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            status=1;
            break;
        }
    }
    if(status==0)
        printf("%d is prime",n);
    else
        printf("%d is not prime",n);
    return 0;
}