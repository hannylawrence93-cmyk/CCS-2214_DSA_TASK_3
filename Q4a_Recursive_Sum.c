#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n + sum(n - 1);
    }
}

int main() {
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input!");
    }
    else {
        result = sum(n);
        printf("Sum of first %d natural numbers = %d",
               n, result);
    }

    return 0;
}