#include <stdio.h>

int *fun();

int main() {
    int *p;
    p = fun();
    printf("%d\n", *p);                  // Prints the value of x (10)
    printf("%p\n", (void *)p);           // Prints the address stored in p
    printf("%p\n", (void *)&p);          // Prints the address of p itself
    return 0;
}

int *fun() {
    static int x = 10;
    return &x;
}
