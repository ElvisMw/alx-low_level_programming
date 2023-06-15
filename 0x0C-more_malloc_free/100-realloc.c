#include "main.h"
#include <stdlib.h>

/**
 * _realloc - uses  malloc and free
 * @ptr: Pointer to malloc
 * @old_size: Size of previous memory
 * @new_size: New memory memory
 * Return: Pointer reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	while (old_size--)
		new_ptr[old_size] = ((char *)ptr)[old_size];

	free(ptr);
	return (new_ptr);
}
