#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: string destination
 * @n: number of bytes to copy
 * @src: string source
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
