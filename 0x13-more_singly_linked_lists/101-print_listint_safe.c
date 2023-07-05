#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Represents linked list's head pointer
 * Return: Numerical value for nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}


		current = current->next;
	}

	return (count);
}
