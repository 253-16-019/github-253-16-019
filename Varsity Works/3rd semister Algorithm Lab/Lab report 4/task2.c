#include <stdio.h>
#include<string.h>
int main(){
    int n, i, j;
    char name[50][50];
    float price[50];
    printf("Enter number of products: ");
    scanf("%d", &n);
    printf("Enter Product Name and Price:\n");
    for(i = 0; i < n; i++){
        scanf("%s %f", name[i], &price[i]);
    }
    char tempName[50];
    float tempPrice;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(price[j] > price[j + 1]){
                tempPrice = price[j];
                price[j] = price[j + 1];
                price[j + 1] = tempPrice;

                strcpy(tempName, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempName);
            }
        }
    }
    printf("\nProducts Sorted by Price\n");
    for(i = 0; i < n; i++){
        printf("%s\t%.0f\n", name[i], price[i]);
    }
    return 0;
}