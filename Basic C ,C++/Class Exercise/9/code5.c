#include<stdio.h>
int main(){
    int a[32],n,i=0,j;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n==0){
        printf("octal: 0 \n");
        return 0;
    }
    while(n>0){
        a[i]=n%8;
        n=n/8;
        i++;
    }
    printf("octal: ");
    for(j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}