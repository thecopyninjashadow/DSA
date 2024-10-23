#include <stdio.h>

int main() {
    // Declare and initialize the 2D array
    int stud[5][2] = {
                        {1234, 56},
                        {1212, 33},
                        {1434, 80},
                        {1312, 78},
                        {1203, 75}
                    };


    for (int i = 0; i <= 4; i++) {  
        printf("\n");
        for (int j = 0; j <= 1; j++) {    // Loop through the columns
            printf("%d\t", stud[i][j]);  // Print each element
        }
    }

    return 0;
}
