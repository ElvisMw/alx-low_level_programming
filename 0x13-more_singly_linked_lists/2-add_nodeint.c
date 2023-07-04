#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds new node on listint_t list's begining
 * @head: Points to head node's pointer
 * @n: Represents integer value to be stored in  new_node
 *
 * Return: Upon success, returns address of new element, otherwise  NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
