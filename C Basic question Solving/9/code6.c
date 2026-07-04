#include<stdio.h>
int main(){
    int a[100],n,i=0,j;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n==0){
        printf("Hexa-decimal: 0 \n");
        return 0;
    }
    while(n>0){
        int r=n%16;
        if(r<10){
            a[i]=r+'0';
        }
        else{
            a[i]=r-10+'A';
        }
        n=n/16;
        i++;
    }
    printf("Hexa-decimal: ");
    for(j=i-1;j>=0;j--){
        printf("%c",a[j]);
    }
    return 0;
}