#include <stdio.h>

int main() {
    int arr[100], n, key, found = 0;

    // Prompt the user to enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Prompt the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt the user to enter the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1; // Element found
            printf("Element %d found at index %d.\n", key, i);
            
        }else (!found) {
        printf("Element %d not found in the array.\n", key);
    }
    }

    


    return 0;
}
