#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints listint_t list elements
 * @h: Points list's header
 * Return: Numerical value for  nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
