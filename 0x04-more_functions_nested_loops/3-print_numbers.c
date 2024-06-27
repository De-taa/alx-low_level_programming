#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	int pr;

	for (pr = 48; pr <= 57; pr++)
	{
		_putchar(pr);
	}
	_putchar('\n');
}
