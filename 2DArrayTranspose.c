#include <stdio.h>

int main() {
    int a[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int transpose[2][3];  // Transposed matrix will have dimensions 2x3

    // Transpose the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[j][i] = a[i][j];  // Transpose: rows become columns and vice versa
        }
    }

    // Print the transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
