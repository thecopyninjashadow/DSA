#include<stdio.h>
int main(){
    int a = 5;
    char *aa = (char *)&a;
    float c = 25.0;
    char *cc = (char *)&c;

    printf("\nAddress of aa: %u",aa);
    printf("\nValue of aa: %d", *aa);
    printf("\nAddress of cc: %u",cc);
    printf("\nValue of cc: %f", *cc);

}