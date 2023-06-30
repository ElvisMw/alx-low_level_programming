#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds  new node at the end of  list_t list.
 * @head: Pointer to the head of the list.
 * @str: reorersents string  added to the new node.
 *
 * Return: upon success the address of the new element,
 * otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;

    if (str == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }

    return (new_node);
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Numerical value for nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        count++;
    }

    return (count);
}
