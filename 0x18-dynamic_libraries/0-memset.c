#include "main.h"
/**
 * _memset - allows for a block memory with known value.
 * @s: starting address of memory.
 * @b: wanted  value
 * @n: for number of bytes thha need to be changed
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

