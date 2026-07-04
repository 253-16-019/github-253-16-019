#include <stdio.h>
#include <string.h>  // for strcspn()

int main() {
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character if it exists
    name[strcspn(name, "\n")] = '\0';

    printf("Your name is: %s\n", name);

    return 0;
}