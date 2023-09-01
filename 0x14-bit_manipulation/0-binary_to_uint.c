#include "main.h"

/**
 * binary_to_uint - function that converts a binary num to unsigned int
 * @b: string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[c] - '0');
	}

	return (dec_val);
}
