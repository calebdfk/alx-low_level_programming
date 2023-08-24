#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *cal;

	while (head)
	{
		cal = head->next;
		free(head->str);
		free(head);
		head = cal;
	}
}
