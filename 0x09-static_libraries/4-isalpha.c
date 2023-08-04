#include "main.h"

/**
 *  _isalpha - checks for alphabetic character
 *  @c: The character that will be checked
 *  Return: 1 for alphabet characters or 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
