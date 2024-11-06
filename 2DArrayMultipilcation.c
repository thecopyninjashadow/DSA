#include <stdio.h>

int main() {
    
    int A[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int B[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int C[3][3] = {0};  // Result matrix C with dimensions 3x3 (m x p)

    // Standard matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = (A[i][0] * B[0][j]) + (A[i][1] * B[1][j]);
        }
    }

    // Print the result matrix C
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
