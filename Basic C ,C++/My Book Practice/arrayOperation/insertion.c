#include<stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    // +1 for insertion
    int arr[n + 1];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int p, v;
    printf("Enter Position: ");
    scanf("%d", &p);

    printf("Enter the element that you want to insert: ");
    scanf("%d", &v);

    if (p >= n) {
        arr[n] = v;
    } else {
        for (int j = n; j > p; j--) {
            arr[j] = arr[j - 1];
        }
        arr[p] = v;
    }

    n++;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
