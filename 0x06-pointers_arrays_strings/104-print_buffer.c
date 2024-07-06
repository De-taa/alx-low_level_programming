#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the position in hexadecimal */
		printf("%08x: ", i);

		/* Print the hexadecimal content, 2 bytes at a time */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}

		/* Print the content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[i + j]))
					putchar(b[i + j]);
				else
					putchar('.');
			}
		}

		printf("\n");
	}
}
