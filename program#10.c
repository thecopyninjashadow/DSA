#include<stdio.h>
int *fun();
int main(){
    int *p;
    int *fun();
    p = fun();
    printf("%d\n",*p);
    printf("%u", p);
}

int *fun(){
    static int x = 10;
    return (&x);
}