#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Points list's head
 * Return: Numerical value for nodes in the list
 */
void print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
