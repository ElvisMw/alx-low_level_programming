#include "lists.h"

/**
 * list_len - Returns also number of elements in linked list_t list.
 * @h: Pointer to head of the linked list.
 *
 * Return: Numerical value for elements in the list.
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
