#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - This is singly linked list
 * @str: Reprsents string - (malloc'ed string)
 * @len: Represents length of the string
 * @next: Represents points to next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
