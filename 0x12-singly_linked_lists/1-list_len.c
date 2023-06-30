#include <stddef.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list_t list.
 * @h: Represents pointer to head node of list
 * Return: Numerical value for elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
