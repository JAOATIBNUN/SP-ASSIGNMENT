#include <stdio.h>

int main() {
    int num, Prime = 1;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the entered number is less than 2
    if (num < 2) {
        Prime = 0;
    } else {
        // Iterate from 2 to half of the number
        for (int i = 2; i <= num / 2; i++) {
            // If num is divisible by any number from 2 to half of num
            if (num % i == 0) {
                Prime = 0; 
                break;
            }
        }
    }

    // Print the result
    if (Prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

