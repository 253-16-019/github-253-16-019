#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=2;i++){ //Outer loop = No. of lines(Row)
        for(int i=1;i<=n;i++){ // Inner loop = no. of coloum
            printf("*");
        }
    }
    return 0;
}