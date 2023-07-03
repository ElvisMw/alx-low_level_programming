#include "lists.h"

/**
 * listint_len - Returns numerical value for elements
 * inlinked listint_t list
 * @h: Points to list's head
 * Return: Numerical vlaue for  elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
