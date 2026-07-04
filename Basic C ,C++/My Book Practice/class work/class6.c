// #include<stdio.h>
// int main(){
//     int *ptr,q;
//     q=50;
//     ptr=&q;
//     printf("%d",*ptr);
//     return 0;
// }
#include <stdio.h>

int main() 
{
    /* local variable definition */
    int a = 10;

LOOP:   /* label for goto */

    do
    {
        if (a == 15)
        {
            /* skip the iteration */
            a = a + 1;
            goto LOOP;
        }

        printf("value of a: %d\n", a);
        a++;

    } while (a < 20);

    return 0;
}
