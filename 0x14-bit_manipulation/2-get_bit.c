#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (n == 0 && index < 64)
		return (0);

	for (c = 0; c <= 63; n >>= 1, c++)
	{
		if (index == c)
		{
			return (n & 1);
		}
	}

	return (-1);
}
