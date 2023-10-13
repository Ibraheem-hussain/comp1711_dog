#include <stdio.h>

int main () {

    int a ;

    for (a = 20; a >= 0; a-=2) {
    printf("a = %d\n", a);
    }
    printf("after exiting the loop: a = %d\n", a);
    return 0;
}