#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;

}
int main(){
    int n;
    printf("Ente n :");
    scanf("%d",&n);
    int r;
    printf("Enter r :");
    scanf("%d",&r);

    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);

    int nCr=nfact/(rfact*nrfact);

    printf("%d",nCr);
}