#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Performs freeing of
 * listint_t linked list
 * @h: Represents linked list's head pointer
 * Return: actual  size of list after freeing
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	current = *h;
	while (current != NULL)
	{

		if (current <= current->next)
		{
			*h = NULL;
			break;
		}

		temp = current;
		current = current->next;
		free(temp);
		count++;
	}

	return (count);
}
