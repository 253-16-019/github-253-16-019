#include<stdio.h>
int main(){
    int n;
    printf("enter a number of line:");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    int a=64;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=nst;k++){
            int d=k+64;
            char ch=(char)d;
            printf("%c",ch);
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}