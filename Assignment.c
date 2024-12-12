#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    if (top < MAX - 1)
        stack[++top] = ch;
}

char pop() {
    if (top >= 0)
        return stack[top--];
    return '\0';
}

void displayReversed(char name[]) {
    printf("Reversed Name: ");
    for (int i = 0; i < strlen(name); i++) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {
    char name[MAX];
    printf("Enter your name: ");
    scanf("%s", name);

    for (int i = 0; i < strlen(name); i++) {
        push(name[i]);
    }

    displayReversed(name);
    return 0;
}
