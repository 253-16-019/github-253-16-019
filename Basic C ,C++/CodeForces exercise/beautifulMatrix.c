#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[5][5];
    int moves=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                moves=abs(2-i)+abs(2-j);
            }
        }
    }
    printf("%d\n",moves);
    return 0;
}