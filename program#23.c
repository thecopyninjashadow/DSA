#include <stdio.h>

int main() {
    // Define a 2D array of size 5x2 with new values
    int stud[5][2] = {
        {1234, 56},
        {1212, 33},
        {1434, 80},
        {1312, 78},
        {1203, 75}
    };

    // Loop through each row of the 2D array
    for (int i = 0; i <= 4; i++) {
        // Loop through each column of the current row
        for (int j = 0; j <= 1; j++) {
            // Print the value of the current element using pointer notation
            printf("Value at stud[%d][%d] = %d\n", i, j, *(*(stud + i) + j));
        }
    }

    return 0;
}