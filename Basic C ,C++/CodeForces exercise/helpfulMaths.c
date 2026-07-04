#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",s);
    int num[100];
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i] !='+'){
            num[count++]=s[i]-'0';
        }
    }
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-1-i;j++){
            if(num[j]>num[j+1]){
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%d",num[i]);
        if(i<count-1){
            printf("+");
        }
    }
    return 0;
}