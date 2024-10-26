#include <stdio.h>

// Function prototype
void aeraperi(int radius, float *area, float *perimeter);

int main() {
    int radius;
    float area, perimeter;

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Call function to calculate area and perimeter
    aeraperi(radius, &area, &perimeter);

    // Display results
    printf("Area of the circle: %.2f\n", area);
    printf("Perimeter of the circle: %.2f\n", perimeter);

    return 0;
}

// Function to calculate area and perimeter
void aeraperi(int radius, float *area, float *perimeter) {
    *area = 3.1416 * radius * radius;           // Calculate area
    *perimeter = 2 * 3.1416 * radius;           // Calculate perimeter
}
