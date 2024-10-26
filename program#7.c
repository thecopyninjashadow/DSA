#include<stdio.h>
void swapV(int a,int b);
int main(){
    int a = 5;
    int b = 20;

    printf("\nValue of a: %u",a);
    printf("\nValue of b: %u",b);

    swapV(a,b);

}
void swapV(int a,int b){
    int temp = a;
    temp = a;
    a = b;
    b = temp;
    printf("\nValue of a: %u",a);
    printf("\nValue of b: %u",b);
}
