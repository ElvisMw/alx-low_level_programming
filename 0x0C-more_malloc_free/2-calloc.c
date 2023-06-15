#include "main.h"
#include <stdlib.h>
/**
 * _calloc - array memory using malloc
 * @nmemb: Amount array elements
 * @size: element in bytes
 *
 * Return: Success points allocated memory or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_letty_size;
	void *ptr;
	char *char_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_letty_size = nmemb * size;

	ptr = malloc(total_letty_size);

	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;

	for (i = 0; i < total_letty_size; i++)
	{
		char_ptr[i] = '\0';
	}

	return (ptr);
}
