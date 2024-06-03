#include <stdio.h>

int main() {
    int num, sum = 0;

    // Prompt the user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the entered number is non-negative
    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1; // Return with error status
    }

    // Calculate the sum of digits
    while (num != 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10;       // Remove the last digit from the number
    }

    // Print the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
