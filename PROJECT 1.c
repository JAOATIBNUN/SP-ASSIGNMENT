#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Prompt the user to enter the principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Prompt the user to enter the rate of interest
    printf("Enter the rate of interest (per annum): ");
    scanf("%f", &rate);

    // Prompt the user to enter the time period in years
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate the simple interest
    simple_interest = (principal * rate * time) / 100.0;

    // Display the simple interest
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
