#include<stdio.h>
int main(){
    int n;
    printf("Enter N th term:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a*2;
    }
    //gp-> a = ar^(n-1);
    //     a = 1*2^(n-1);

    return 0;
}