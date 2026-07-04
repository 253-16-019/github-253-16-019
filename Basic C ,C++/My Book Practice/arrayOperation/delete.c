#include<stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int p;
    printf("Enter Position: ");
    scanf("%d", &p);

    if (p >= n) {
        printf("Delte is not posible ");
    } 
    else {
        for (int j = p+1; j<n; j++) {
            arr[j-1] = arr[j];
        }
        n--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}