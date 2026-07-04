#include <stdio.h>

long long nCr(int n, int r) {
    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= i; k++) {
            printf("%lld ", nCr(i, k));
        }
        printf("\n");
    }

    return 0;
}
