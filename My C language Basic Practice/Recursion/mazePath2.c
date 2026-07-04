#include <stdio.h>

int maze(int sr, int sc, int er, int ec) {
    if (sr > er || sc > ec) return 0;  // বাইরে চলে গেলে
    if (sr == er && sc == ec) return 1; // গন্তব্যে পৌঁছালে

    // দুই দিকেই যাও: right & down
    int rightways = maze(sr, sc + 1, er, ec);
    int downways  = maze(sr + 1, sc, er, ec);

    return rightways + downways;
}

int main() {
    int r, c;
    printf("Enter Row: ");
    scanf("%d", &r);
    printf("Enter Column: ");
    scanf("%d", &c);

    int no_of_ways = maze(1, 1, r, c);
    printf("The number of ways: %d\n", no_of_ways);
    return 0;
}
