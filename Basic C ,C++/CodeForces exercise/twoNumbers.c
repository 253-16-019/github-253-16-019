#include <stdio.h>
int main() {
    int A, B;
    scanf("%d%d", &A, &B);

    float div = (float)A / B;
    int floor_val = (int)div;

    printf("floor %d / %d = %d\n", A, B, floor_val);

    int ceil_val = (div > floor_val) ? floor_val + 1 : floor_val;
    printf("ceil %d / %d = %d\n", A, B, ceil_val);

    int round_val = (div - floor_val) >= 0.5 ? floor_val + 1 : floor_val;
    printf("round %d / %d = %d\n", A, B, round_val);

    return 0;
}
