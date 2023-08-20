#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of
 * a dlistint_t linked list.
 * @head: Reresents a pointer to the head of the linked list's pointer.
 * @index: Reresents index of the node that should be deleted.
 * And the index starts at 0.
 * Return: Return 1 upon succees, otherwise -1(failed).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1);
}
