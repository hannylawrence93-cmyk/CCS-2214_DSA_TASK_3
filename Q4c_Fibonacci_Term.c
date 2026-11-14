#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, result;

    printf("Enter the position: ");
    scanf("%d", &n);

    if (n < 0 || n > 45) {
        printf("Enter a position between 0 and 45.");
    }
    else {
        result = fibonacci(n);

        printf("Fibonacci term at position %d = %d",
               n, result);
    }

    return 0;
}