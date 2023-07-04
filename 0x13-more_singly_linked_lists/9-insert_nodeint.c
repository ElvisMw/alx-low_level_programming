#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node anywhere in the list
 * @head: Points to list's header pointer
 * @idx: Index to where new node is added
 * @n: Represents stored value in  new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int e_m;
	listint_t *new_node, *current_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{

		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	for (e_m = 0; e_m < idx - 1 && current_node != NULL; e_m++)
		current_node = current_node->next;

	if (current_node == NULL)
	{

		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
