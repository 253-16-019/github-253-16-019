#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int A[r1][c1], B[r2][c2];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            scanf("%d", &B[i][j]);
         }

    }
    if (r1 == r2 && c1 == c2) {
        int add[r1][c1];

        printf("\nMatrix Addition:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                add[i][j] = A[i][j] + B[i][j];
                printf("%d ", add[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix addition NOT possible (dimensions mismatch).\n");
    }
    if (c1 == r2) {
        int mul[r1][c2];
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c2; j++){
                mul[i][j] = 0;
            }
        }
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("\nMatrix Multiplication:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\nMatrix multiplication NOT possible (columns of A != rows of B).\n");
    }

    return 0;
}
