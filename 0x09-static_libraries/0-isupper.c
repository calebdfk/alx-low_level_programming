#include "main.h"

/**
 *  _isupper - checks for uppercase character
 *  @c: The number to be checked
 *  Return: 1 for uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
