#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints listint_t list's elements
 * @h: Points to list's header
 * Return: Upon success, numerical value for nodes in list
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
