#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    scanf("%s", a);

    int unique = 0;
    int length = strlen(a);

    for (int i = 0; i < length; i++) {
        int foundDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                foundDuplicate = 1;
                break;
            }
        }
        if (!foundDuplicate) {
            unique++;
        }
    }
    if (unique % 2 == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }

    return 0;
}
