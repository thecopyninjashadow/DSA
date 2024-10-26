#include<stdio.h>
int main(){
    int a = 5;
    int *j = &a;
    printf("\nAddress of a: %u",&a);
    printf("\nValue of a: %d", a);
    printf("\nValue of a: %d", *(&a));
    printf("\nValue of j %u", j);
    printf("\nAddress of a: %d", &j);
    printf("\nValue of j: %d", *j);
    printf("\nValue of j: %d", *(&j));   
    
}