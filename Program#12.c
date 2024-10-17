// Pass by value
#include<stdio.h>
void display(int n);
int main(){
    int i;
    int marks[] = {55,65,75,56,78,78,90}; //array of size 7

    for(int i=0; i<=6; i++)
        display(marks[i]); // call display function
}

void display(int n){
    printf("%d\n",n);
}