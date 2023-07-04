#include "lists.h"

/**
 * listint_len - Returns numerical value for elements in
 * linked listint_t list
 * @h: Points to linked list's header
 * Return: Numerical value for elements in list
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
