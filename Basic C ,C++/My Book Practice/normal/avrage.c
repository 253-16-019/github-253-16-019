#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;

    printf("The average is: %.2f\n", average);

    return 0;
}