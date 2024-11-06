#include <stdio.h>

int main() {
    int a[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int b[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int result[3][2];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = a[i][j] + b[i][j];  
        }
    }


    printf("Transposed matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
