#include<stdio.h>
void faat(){
    printf("so,, india faat ekhan theke\n");
    return;
}
void bangladesh(){
    printf("but i am bangladeshi.\n");
    faat();
    return;
}
void india(){
    printf("you are indian.\n");
    bangladesh();
    return;
}
int main(){
    india();
    return 0;
}