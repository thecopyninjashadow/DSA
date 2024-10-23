#include<stdio.h>
int main(){
    int num[] = {24,34,12,44,56,17};
    int i=0;
    while(i<=5){
        printf("\n Address = %u", &num[i]);
        printf("\n Element = %d ", num[i]); //*(num + i)
        printf("%d ", *(num + i)); //Error: *(num++)
        printf("%d ", *(i + num));
        printf("%d ", i[num]); //*(i + num)
        i++;
    }
}

