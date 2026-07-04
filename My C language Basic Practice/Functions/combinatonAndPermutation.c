#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int r;
    printf("enter another number:");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1; //n-r
    for(int i=2;i<=n;i++){
        nfact=nfact*i;
    }
    for(int i=2;i<=r;i++){
        rfact=rfact*i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    int nCr=(nfact/(rfact*nrfact));
    printf("%d",nCr);
    return 0;
}