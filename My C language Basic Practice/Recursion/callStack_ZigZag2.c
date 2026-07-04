#include<stdio.h>
void zigzag(int n){
    if(n==0) return;
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    return;
}
void printAll(int i,int n){
    if(i>n) return;
    printf("n=%d --> ",i);
    zigzag(i);
    printf("\n");
    printAll(i+1,n);
}
int main(){
    int n;
    printf("Enter number of line:");
    scanf("%d",&n);
    printAll(1,n);
    return 0;
}