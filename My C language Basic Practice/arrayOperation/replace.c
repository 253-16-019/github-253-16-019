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

    int p, v;
    printf("Enter the position you want to update: ");
    scanf("%d", &p);

    printf("Enter the value you want to update: ");
    scanf("%d", &v);

    if (p < 0 || p >= n) {
        printf("Update is not possible\n");
    } else {
        arr[p] = v;
    }
    printf("Array after update: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
