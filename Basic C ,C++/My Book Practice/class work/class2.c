#include<stdio.h>
int main(){
    int n,status=0,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        status=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                status=1;
                break;
            }
        }
        if(status==0){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nTotal number is=%d",count);
    
    return 0;
}