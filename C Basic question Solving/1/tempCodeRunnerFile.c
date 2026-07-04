#include<stdio.h>
int main(){
    int d,m,y;
    printf("Enter any date in DD-MM-YY:");
    scanf("%d-%d-%d",&d,&m,&y);
    printf("day=%d\n",d);
    printf("month=%d\n",m);
    printf("year=%d",y);
    return 0;
}