#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: 10 times of the numbers
 */

void more_numbers(void)
{
	int a, c;

	for (a = 0; a < 10; a++)
	{
	for (c = 0; c <= 14; c++)
	{
	if (c > 9)
	{
	_putchar((c / 10) + '0');
	}
	_putchar((c % 10) + '0');
	}
	_putchar('\n');
	}
}
