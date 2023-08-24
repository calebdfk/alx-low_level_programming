#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: The double pointer
 * @str: new string
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *dan;
	unsigned int len = 0;

	while (str[len])
		len++;

	dan = malloc(sizeof(list_t));
	if (!dan)
		return (NULL);

	dan->str = strdup(str);
	dan->len = len;
	dan->next = (*head);
	(*head) = dan;

	return (*head);
}
