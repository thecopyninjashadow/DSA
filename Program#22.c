#include <stdio.h>

int main() {
    // Define a 2D array of size 5x2
    int stud[5][2] = {
        {1234, 56},
        {1212, 33},
        {1434, 80},
        {1312, 78},
        {1203, 75}
    };

    // Loop through each row of the 2D array
    for (int i = 0; i <= 4; i++) {
        // Print the address of the current row (stud[i])
        printf("Address of row %d: %u\n", i, stud[i]);
    }

    return 0;
}