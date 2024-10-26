#include<stdio.h>
int main(){
    int a = 5;
    int *j = &a;
    int **k = &j;
    printf("\nAddress of a: %u",&a);
    printf("\nValue of a: %d", a);
    printf("\nValue of a: %d", *(&a));
    printf("\nValue of j %u", j);
    printf("\nAddress of j: %u", &j);
    printf("\nValue of j: %d", *j);
    printf("\nValue of j: %d", *(&j));   
    printf("\nValue of k %u", k);
    printf("\nAddress of k: %u", &k);
    printf("\nValue of k: %d", *k);
    printf("\nValue of k: %d", **k);  
    
}