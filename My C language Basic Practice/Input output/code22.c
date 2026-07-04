#include<stdio.h>
int main(){
    int day,month,year;
    printf("enter the date format DD/MM/YY or DD-MM-YY or DD,MM,YY or DD MM YY : ");
    if(scanf("%d%*[-/, ]%d%*[-/, ]%d%*[-/, ]",&day,&month,&year) ==3){
        printf("day= %d\n",day);
        printf("month= %d\n",month);
        printf("year= %d\n",year);
    }
    else{
        printf("date is invalid");
    }
    return 0;
}
