#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: The number of time to print diagonal lines
 * Return: ()
 */

void print_diagonal(int n)
{
	int d, f;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (d = 0; d < n; d++)
	{
	for (f = 0; f < d; f++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
