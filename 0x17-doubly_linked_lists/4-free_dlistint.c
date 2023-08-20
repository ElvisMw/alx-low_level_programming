#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - This frees a dlistint_t list.
 * @head: Represents head of the linked list's pointer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
