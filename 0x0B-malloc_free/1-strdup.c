#include "main.h"
#include <stdlib.h>

/**
 * _strdup - points to new memory allocation for string duplicate
 * @str: copy of string
 * Return: pointer upon success or 0/NULL if fails
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}
