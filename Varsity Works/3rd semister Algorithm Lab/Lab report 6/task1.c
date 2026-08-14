#include <stdio.h>
int main(){
    float a[100], temp;
    int n, i, j, min;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter CGPAs: ");
    for(i = 0; i < n; i++){
        scanf("%f", &a[i]);
    }
    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(a[j] > a[min]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("CGPAs in descending order:\n");
    for(i = 0; i < n; i++){
        printf("%.2f ", a[i]);
    }
    return 0;
}