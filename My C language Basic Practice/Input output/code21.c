#include<stdio.h>
int main(){
    int day,month,year;
    printf("enter the date format DD-MM-YY : ");
    if(scanf("%d-%d-%d",&day,&month,&year) !=3){
        printf("the date is invalid");
        return 1;
    }
    printf("day= %d\n",day);
    printf("month= %d\n",month);
    printf("year= %d\n",year);
    return 0;
}