#include "lists.h"
/**
 * reverse_listint - For reversing listint_t linked list
 * @head: Points head node's pointer
 * Return: pointer first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		current->next = previous;
		previous = current;
	}

	*head = current;
	return (*head);
}
