#include<stdio.h>
int main(){
    int a = 5;
    int *aa = &a;
    char b = 'A';
    char *bb = &b;
    float c = 5.0;
    float *cc = &c;

    printf("\nAddress of aa: %u",aa);
    printf("\nValue of aa: %d", *aa);
    printf("\nAddress of bb: %u",bb);
    printf("\nValue of bb: %c", *bb);
    printf("\nAddress of cc: %u",cc);
    printf("\nValue of cc: %f", *cc);

}