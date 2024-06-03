#include <stdio.h>
#include <math.h>



int main() {
    int choice;
    float radius, length, width, base, height, area;

    // Prompting the user to choose a shape
    printf("Choose a shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // For circle
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area =M_PI * pow(radius, 2);
        printf("Area of the circle: %.2f\n", area);
    } 
    else if (choice == 2) {
        // For rectangle
        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);
        area = length * width;
        printf("Area of the rectangle: %.2f\n", area);
    } 
    else if (choice == 3) {
        // For triangle
        printf("Enter the base of the triangle: ");
        scanf("%f", &base);
        printf("Enter the height of the triangle: ");
        scanf("%f", &height);
        area = 0.5 * base * height;
        printf("Area of the triangle: %.2f\n", area);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}

