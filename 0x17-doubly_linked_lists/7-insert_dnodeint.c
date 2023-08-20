#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given
 * position in a dlistint_t list.
 * @h: Represents pointer to head of the linked list's pointer.
 * @idx: Represnts index of the list where the new node should be added.
 * @n: Represents the integer value to be stored in the new node.
 * Return: Upon success return the address of the new node,
 * or NULL when failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}

	free(new_node);
	return (NULL);
}
