#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1) printf("1 is neither prime nor composite num");
    if(a==0) printf("this is a prime number");
    else printf("the bunber is coposite");
    return 0;
}