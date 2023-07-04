#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node inindex
 * of listint_t linked list's index
 * @head: Points to head node's pointer
 * @index: Represents the node's index to be deleted. Index starts at 0
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		if (count == index)
		{
			if (index == 0)
			{
				*head = current->next;
			}
			else
			{
				prev->next = current->next;
			}
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		count++;
	}

	return (-1);
}
