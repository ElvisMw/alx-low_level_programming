#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - This adds a new-node at the beginning of a dlistint_t list.
 * @head: Represent pointer to the head of the linked list's pointer.
 * @n: Represents innteger value to be stored in the new node.
 * Return: Upon succeful running, return the address of the
 * new element, otherwise NULL ifit failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
