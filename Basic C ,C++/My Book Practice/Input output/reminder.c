#include<stdio.h>
int main(){
    int a,b;
    
    printf("Enter Divident: ");
    scanf("%d",&a);
    
    printf("Enter Divisor: ");
    scanf("%d",&b);
    
    int qutient = a/b ;
    int reminder = a-b*qutient;
    printf("\nthe reminder is : %d",reminder);

    return 0;
}