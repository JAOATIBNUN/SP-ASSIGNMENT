#include <stdio.h>

void fibonacci(int n) {
    int i, first = 0, second = 1, next;

    printf("Fibonacci sequence up to the %d-th term:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
