#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes array of chars
 * @size: array size
 * @c: character for array
 * Return: on success, return pointer or 0/NULL unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
