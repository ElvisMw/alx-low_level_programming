#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes head node of listint_t linked list
 * @head: Double pointer to list's head
 
 * Return: stored head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

