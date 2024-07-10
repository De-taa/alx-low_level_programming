#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar('\n');
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
