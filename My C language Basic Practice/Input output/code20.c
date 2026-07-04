#include<stdio.h>
int main(){
    int day,month,year;
    printf(" date in the format DD/MM/YYYY : ");
    if(scanf("%d/%d/%d",&day,&month,&year )!= 3){
        printf("the date is invalid");
        return 1;
    }
    printf("day=%d",day);
    printf("month=%d",month);
    printf("year=%d",year);
    return 0;
}