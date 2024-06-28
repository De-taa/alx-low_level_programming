#include <stdio.h>
#include <math.h>

/**
 * is_prime - checks if a number is prime
 * @n: the number to be checked
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(long n)
{
	long i;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}
	return (1);
}

/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long max_prime = -1;
	long i;

	/* Check for smallest prime factor (2) */
	while (number % 2 == 0)
	{
		max_prime = 2;
		number /= 2;
	}

	/* Check for odd factors */
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			max_prime = i;
			number /= i;
		}
	}

	/* If number is a prime number greater than 2 */
	if (number > 2)
		max_prime = number;

	printf("%ld\n", max_prime);

	return (0);
}
