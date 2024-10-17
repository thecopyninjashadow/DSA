#include<stdio.h>
void display(int *j, int n);
int main(){
    int num[] = {24,34,12,44,56,17};
    display(&num[0],6);
}

void display(int *j, int n){
    int i=1;
    while(i<=n){
        printf("%d ",*j);
        i++;
        j++;
    }
}
