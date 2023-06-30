#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
