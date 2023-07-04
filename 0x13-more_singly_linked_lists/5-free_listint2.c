#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list then puts head to NULL
 * @head: Points to list's head pointer.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
