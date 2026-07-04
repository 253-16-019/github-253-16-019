#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=0;
    char op[10];
    for(int i=1;i<=n;i++){
        scanf("%s",op);
        if( strcmp(op,"++X")==0 || strcmp(op,"X++")==0 ){
            x++;
        }
        else if( strcmp(op,"--X")==0 || strcmp(op,"X--")==0 ){
            x--;
        }
    }
    printf("%d",x);
    return 0;
}