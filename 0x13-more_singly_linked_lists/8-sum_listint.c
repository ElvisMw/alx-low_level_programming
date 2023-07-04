#include "lists.h"

/**
 * sum_listint - Returns summation of all data (n)
 * of a listint_t linked list
 * @head: Points to linked list's header
 * Return: Sumation of all data (n) of linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
