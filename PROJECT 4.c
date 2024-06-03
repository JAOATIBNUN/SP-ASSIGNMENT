#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPalindrome = 1; // Assume the string is a palindrome by default

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';

    // Check if the entered string is a palindrome
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
