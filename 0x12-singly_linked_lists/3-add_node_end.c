#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: double pointer
 * @str: The string
  * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dan;
	list_t *chi = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	dan = malloc(sizeof(list_t));
	if (!dan)
		return (NULL);

	dan->str = strdup(str);
	dan->len = len;
	dan->next = NULL;

	if (*head == NULL)
	{
		*head = dan;
		return (dan);
	}

	while (chi->next)
		chi = chi->next;

	chi->next = dan;

	return (dan);
}
