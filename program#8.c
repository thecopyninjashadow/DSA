#include<stdio.h>

void swapV(int *a, int *b);  // Update function prototype to take pointers

int main() {
    int a = 5;
    int b = 20;

    printf("\nValue of a before swap: %d", a);
    printf("\nValue of b before swap: %d", b);

    swapV(&a, &b);  // Pass addresses of a and b to the function

    printf("\nValue of a after swap: %d", a);
    printf("\nValue of b after swap: %d", b);

    return 0;
}

void swapV(int *a, int *b) {  // Function now takes pointers
    int temp = *a;
    *a = *b;
    *b = temp;
}
