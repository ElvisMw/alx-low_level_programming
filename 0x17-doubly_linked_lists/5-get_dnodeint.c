#include "lists.h"

/**
 * get_dnodeint_at_index - This returns the n-th node of
 * a dlistint_t linked list.
 * @head: Represents the head of the linked list's pointer.
 * @index: Represents index of the node, and starts from 0.
 * Return: Returns the pointer to the n-th node,
 * or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
