#include <stdio.h>

int main(void)
{
	int n = 50; /* number of Fibonacci numbers to generate */
	unsigned long long fibi1 = 0, fibi2 = 1, next_term;

	/* Print the first two Fibonacci numbers */
	printf("0, 1, ");

	/* Generate and print the rest of the Fibonacci sequence */
	for (int i = 1; i <= n - 1; i++)
	{
		next_term = fibi1 + fibi2;
		printf("%llu", next_term);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");

	return (0);
}
