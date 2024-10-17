// double pointer (pointer to pointer to int)
#include<stdio.h>
void display(int *n);
void show(int **m);
int main(){
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};

    for(i=0; i<=6; i++){
        display(&marks[i]); //element by element
    }
}

void display(int *n){
    show(&n);
}

void show(int **m){
    printf("%d\n", **m);
}

