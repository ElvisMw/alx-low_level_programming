#include "main.h"
/**
 * _strchr - A function that searches for character c
 * @s: pointer to the string in which the
 * character is to be searched
 * @c: character to be searched in the string
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
