#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: The array
 * @size: The number of elements in the array
 * @cmp: The function to be used to compare values
 * Return: ()
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
			return (c);
	}

	return (-1);
}
