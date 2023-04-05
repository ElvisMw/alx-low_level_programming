#include "main.h"
/**
 * _memcpy - is a function that copies a memory area
 * from source src to destination dest.
 *@dest: A pointer to the memory where the data will be copied.
 *@src: A pointer to the memory from where the data will be copied.
 *@n: The number of bytes to be copied.
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
