#include <stdio.h>

void print_fibonacci_sequence() {
    int n = 50;  // number of Fibonacci numbers to generate
    unsigned long long fib1 = 1, fib2 = 2, next_term;

    // Print the first two Fibonacci numbers
    printf("%llu, %llu, ", fib1, fib2);

    // Generate and print the rest of the Fibonacci sequence
    for (int i = 3; i <= n; ++i) {
        next_term = fib1 + fib2;
        printf("%llu", next_term);
        if (i < n) {
            printf(", ");
        } else {
            printf("\n");
        }
        fib1 = fib2;
        fib2 = next_term;
    }
}

int main() {
    print_fibonacci_sequence();
    return 0;
}
