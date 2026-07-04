#include<stdio.h>
int main(){
    int x=4,y,z;
    y= --x;
    z= x--;
    //x++ -> x=x+1;
    //x-- -> x=x-1;
    // x++/x-- -> use x, then increment
    // ++x/--x -> increment, then use 
    printf("%d\n%d\n%d",x,y,z);
    return 0;
}