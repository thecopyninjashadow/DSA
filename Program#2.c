#include<stdio.h>
int main(){
    int a = 5;
    printf("Address of a: %u",&a);
    printf("Value of a: %d", a);
    printf("Value of a: %d", *(&a));
}