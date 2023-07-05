#include "lists.h"

/**
 * find_listint_loop - Find loop in linked list
 * @head: linked list's head pointer
 *
 * Return: upon success, return address of node where loop begins,
 *         otherwise  NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = head->next->next;

	while (hare && hare->next)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	return (NULL);
}

