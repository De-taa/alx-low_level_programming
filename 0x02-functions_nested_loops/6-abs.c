#include "main.h"

/**
 * _abs - function to compute the absolute value of an integar
 * @c: The number to be computed
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
