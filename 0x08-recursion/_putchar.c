#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 * Return: on success 1
 * On error, - is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
