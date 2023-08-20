#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Returns the nuerical value
 * of  the elements in a linked dlistint_t list.
 * @h: Represents the head of the linked lists's pointer.
 * Return: Represents the numerical value of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
