#include<stdio.h>
int main(){
    long n,digit,rev=0;
    printf("Enter ant digit:");
    scanf("%ld",&n);
    while(n>0){
        digit=n%10;
        rev=rev*10 + digit;
        n/=10;
    }
    printf("In word:");
    while(rev>0){
        digit=rev%10;
        switch(digit){
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        }
        rev/=10;
    }
    if(n==0) printf("Zero");
    return 0;
}
