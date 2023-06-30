#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds new node as list_t list begins
 * @head: Pointer that points to the head of the list
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int len;

	for (len = 0; str[len]; len++)
		;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
/* Fill the new node with data */
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);
}
