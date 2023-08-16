#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: the size of the array
 * @action:  pointer to the function to printed
 * Return: ()
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array == NULL || action == NULL)
		return;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
