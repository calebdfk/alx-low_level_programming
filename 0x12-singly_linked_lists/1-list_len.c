#include <stdlib.h>
#include "lists.h"

/**
 * list_len - finction that returns the number of elements in a linked list
 * @h: pointer to the list_t list
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{
		d++;
		h = h->next;
	}
	return (d);
}
