#include <stdio.h>

/**
 * main - print arguments
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
