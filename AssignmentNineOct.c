#include <stdio.h>

// Function to find the maximum value in the array
int findMax(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

// Function to find the minimum value in the array
int findMin(int *arr, int size) {
    int min = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    return min;
}

// Function to calculate the mean of the array
float calculateMean(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return (float)sum / size;
}

// Function to find the mode of the array
int findMode(int *arr, int size) {
    int maxCount = 0;
    int mode = -1;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (*(arr + j) == *(arr + i)) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = *(arr + i);
        } else if (count == maxCount && mode != *(arr + i)) {
            mode = -1; // More than one mode
        }
    }
    
    return mode;
}

// Function to convert characters to uppercase and store only alphabets
void convertToUppercase(char *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) >= 'a' && *(arr + i) <= 'z') {
            *(arr + i) = *(arr + i) - 'a' + 'A';
        } else if (*(arr + i) < 'A' || *(arr + i) > 'Z') {
            *(arr + i) = '\0'; // Replace non-alphabet characters with null
        }
    }
}

int main() {
    int intArr[10];
    char charArr[10];

    // Take input for integer array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &intArr[i]);
    }

    // Take input for character array
    printf("Enter 10 characters:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter character %d: ", i);
        scanf(" %c", &charArr[i]);
    }

    // Find maximum and minimum values
    int max = findMax(intArr, 10);
    int min = findMin(intArr, 10);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    // Calculate mean
    float mean = calculateMean(intArr, 10);
    printf("Mean value: %.2f\n", mean);

    // Find mode
    int mode = findMode(intArr, 10);
    if (mode == -1) {
        printf("Mode: No unique mode\n");
    } else {
        printf("Mode: %d\n", mode);
    }

    // Convert characters to uppercase and store only alphabets
    convertToUppercase(charArr, 10);
    printf("Uppercase alphabets: ");
    for (int i = 0; i < 10; i++) {
        if (charArr[i] != '\0') {
            printf("%c ", charArr[i]);
        }
    }
    printf("\n");

    return 0;
}