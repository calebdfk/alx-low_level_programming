#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number that will be checked
 * Return: 1 for positive num, -1 for neg num or 0 otherwise
 */

int print_sign(int n)

{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
