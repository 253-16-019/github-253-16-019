#include<stdio.h>
int main(){
    int divided,divisor,r;
    printf("enter divided and divisor :");
    scanf("%d %d",&divided,&divisor);

    r=divided%divisor;// '%' diye reminder ber kora hoy;

    printf("the reminder is: %d",r);
    return 0;
}