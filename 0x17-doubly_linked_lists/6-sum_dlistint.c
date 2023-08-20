#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: Represents the head of the linked list's pointer.
 * Return: Returns the summation of all the data (n) of the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
