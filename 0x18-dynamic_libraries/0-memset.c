#include "main.h"
/**
 * _memset - This allows for a block memory
 * with known value.
 * @s: represents the starting address of memory.
 * @b: represents wanted  value
 * @n: representsfor number of bytes that
 * need to be changed
 *
 * Return: will return changed array follwed by a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

