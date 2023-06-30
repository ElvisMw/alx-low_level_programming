#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
 * add_node_end - For adding a new node at end of list_t list
 * @head: Represents pointer to a pointer to the first element of the list
 * @str: Represents string to be added to the list
 * Return: Upon sucess, address of the new element
 * otherwise, NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	/* Check whether input string is NULL */
	if (str == NULL)
		return (NULL);

	/*assisgn  memory new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* copy string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* computes string's length */
	new_node->len = strlen(str);

	/* Set the new node's next pointer to NULL-set as final node */
	new_node->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		/* Assign the new node as the next node of the last node */
		last_node->next = new_node;
	}

	return (new_node);
}
