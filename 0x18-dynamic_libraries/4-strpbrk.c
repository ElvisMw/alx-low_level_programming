#include "main.h"
/**
 * _strpbrk - for entry point
 * @s: for input
 * @accept: for input
 * Return: Always 0 (Success upon completion)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

