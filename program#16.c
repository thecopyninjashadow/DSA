#include<stdio.h>
int main(){
    int num[] = {24, 34, 12, 44, 56, 17};
    int i = 0;
    while(i<5){
        printf("\n Element no. %d\n",i);
        printf("address = %u", &num[i]);
        i++;
    }
}