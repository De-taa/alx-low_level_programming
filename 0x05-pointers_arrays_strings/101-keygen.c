#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 62;
		sum += pass[i];

		if ((2772 - sum) < 62)
		{
			n = 2772 - sum;
			pass[i] = n;
			break;
		}
	}
	for (i = 0; i < 100; i++)
	{
		if (pass[i] == 0)
			break;
		putchar(pass[i] + (pass[i] < 10 ? '0' : (pass[i] < 36 ? 'A' - 10 : 'a' - 36)));
	}
	putchar('\n');

	return 0;
}
