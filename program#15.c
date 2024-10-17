#include<stdio.h>
int main(){
    int i=3, *x;
    float j=1.5, *y;
    char k='c', *z;

    printf("\n Value of i %d",i);
    printf("\n Value of j %f",j);
    printf("\n Value of k %c",k);

    x=&i;
    y=&j;
    z=&k;

    printf("\n Original value in x = %u",x);
    printf("\n Original value in y = %u",y);
    printf("\n Original value in z = %u",z);

    x++;
    y++;
    z++;

    printf("\n New value in x = %u",x);
    printf("\n New value in y = %u",y);
    printf("\n New value in z = %u",z);
}