/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: if NULL return 98
 */

#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
