#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - gives memory via malloc
 * @b: bytes to allocate
 * Return: upon success, return pointer. upon failure, 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
