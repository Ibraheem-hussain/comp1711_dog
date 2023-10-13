#include <stdio.h>

int main () {

    int a = 1;

    for ( ; a <=5;) {
    printf("a = %d\n", a);
    a +=2;
    }
    printf("after exiting the loop: a = %d\n", a);
    return 10;
}