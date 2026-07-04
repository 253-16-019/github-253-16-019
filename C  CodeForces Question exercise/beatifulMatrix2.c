#include<stdio.h>
int main(){
    int arr[5][5];
    int x,y;
    int moves=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]){
                x=i;
                y=j;
            }
        }
    }
        while( x!=2 || y!=2 ){
            if(x>2){
                int temp=arr[x][y];
                arr[x][y]=arr[x-1][y];
                arr[x-1][y]=temp;
                x--;
            }
            else if(x<2){
                int temp=arr[x][y];
                arr[x][y]=arr[x+1][y];
                arr[x+1][y]=temp;
                x++;
            }
            else if(y>2){
                int temp=arr[x][y];
                arr[x][y]=arr[x][y-1];
                arr[x][y-1]=temp;
                y--;
            }
            else if(y<2){
                int temp=arr[x][y];
                arr[x][y]=arr[x][y+1];
                arr[x][y+1]=temp;
                y++;
            }
            moves++;
        }
        printf("\n%d",moves);
    return 0;
}