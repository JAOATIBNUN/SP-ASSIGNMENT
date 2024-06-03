#include <stdio.h>
#include <limits.h>

void findSecondSmallestAndLargest(int arr[], int n, int *secondSmallest, int *secondLargest) {
    int smallest = INT_MAX, largest = INT_MIN;
    *secondSmallest = INT_MAX;
    *secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            *secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < *secondSmallest && arr[i] != smallest) {
            *secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            *secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != largest) {
            *secondLargest = arr[i];
        }
    }
}

void modifyArray(int arr[], int n, int secondSmallest, int secondLargest) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == secondSmallest) {
            if (secondSmallest % 2 == 0) {
                arr[i] += 2;
            } else {
                arr[i] -= 2;
            }
        }
        if (arr[i] == secondLargest) {
            if (secondLargest % 2 == 0) {
                arr[i] *= 2;
            } else {
                arr[i] /= 2;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int secondSmallest, secondLargest;
    findSecondSmallestAndLargest(arr, n, &secondSmallest, &secondLargest);

    modifyArray(arr, n, secondSmallest, secondLargest);

    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}