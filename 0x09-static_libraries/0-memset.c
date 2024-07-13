#include "main.h"

/**
 * _memset - entry point
 * @s: string dest
 * @b: constant byte
 * @n: byte
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
