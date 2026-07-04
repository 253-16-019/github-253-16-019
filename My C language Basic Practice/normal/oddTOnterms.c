#include<stdio.h>
int main(){
    int n;
    printf("enter the n'th term number:");
    scanf("%d",&n);
    //1,3,5,7,......upto n terms;
    //a=1+(n-1)*2;
    //a=2n-1;
    for(int i=1;i<=(2*n-1);i=i+2){
        printf("%d\n",i);
    }
    return 0;
}