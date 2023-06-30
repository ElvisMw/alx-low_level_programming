#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a list_t list
 * @h: Represents a pointer to head of list
 *
 * Return: Numerical value for  nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
