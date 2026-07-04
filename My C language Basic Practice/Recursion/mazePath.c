#include<stdio.h>
int maze(int sr,int sc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(sr==er && sc==ec) return 1;
    if(sc < ec){
        rightways=maze(sr,sc+1,er,ec);
    }
    if(sr < er){
        downways=maze(sr+1,sc,er,ec);
    }

    
    // if(sr==er){
    //     rightways+=maze(sr,sc+1,er,ec);
    // }
    // if(sc==ec){
    //     downways+=maze(sr+1,sc,er,ec);
    // }
    // if(sr<er && sc<ec){
    //     rightways+=maze(sr,sc+1,er,ec);
    //     downways+=maze(sr+1,sc,er,ec);
    // }

    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int r;
    printf("Enter Row:");
    scanf("%d",&r);
    int c;
    printf("Enter Coloum:");
    scanf("%d",&c);
    int no_of_ways=maze(1,1,r,c);
    printf("The number of ways %d",no_of_ways);
    return 0;
}