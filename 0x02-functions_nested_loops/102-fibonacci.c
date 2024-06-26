#include <stdio.h>

/**
 * print_fibonacci_sequence - Prints the first 50 Fibonacci numbers.
 */
void print_fibonacci_sequence(void)
{
	int n = 50; /* Number of Fibonacci numbers to generate */
	unsigned long long fib1 = 1, fib2 = 2, next_term;
	int i;

	/* Print the first two Fibonacci numbers */
	printf("%llu, %llu, ", fib1, fib2);

	/* Generate and print the rest of the Fibonacci sequence */
	for (i = 3; i <= n; ++i)
	{
		next_term = fib1 + fib2;
		printf("%llu", next_term);
		if (i < n)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		fib1 = fib2;
		fib2 = next_term;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci_sequence();
	return (0);
}
