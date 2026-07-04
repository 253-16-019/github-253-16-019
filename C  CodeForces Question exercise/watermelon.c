#include<stdio.h>
int main(){
    long w;
    printf("Enter any weight: ");
    scanf("%ld",&w);
    if(w%2==0 && w>2) printf("YES");
    else printf("NO");
    return 0;
}