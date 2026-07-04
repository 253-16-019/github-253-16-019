#include<stdio.h>
#include<string.h>

int function(int num){
    if(num>0){
        return 1;
    }
    else if(num<0){
        return -1;
    }
    else{
        return num;
    }
}
int main(){
    char a[101];
    char b[101];
    scanf("%s %s",a,b);
    for(int i=0;i<strlen(a);i++){
        if(a[i]>='A'&& a[i]<='Z'){
            a[i]+='a'-'A';
        }
    }
    for(int i=0;i<strlen(b);i++){
        if(b[i]>='A' && b[i]<='Z'){
            b[i]+='a'-'A';
        }
    }
    printf("%d",function(strcmp(a,b)));
    
    return 0;
}