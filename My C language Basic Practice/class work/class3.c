#include<stdio.h>
int main(){
    int i, j, k;
    for(i = 1; i <= 3; i++){
        for(j = 1, k = 65; j <= i; j++, k++){
            printf("%c ", k);
        }
        printf("\n");
    }
    return 0;
}
