#include "main.h"
/**
 * _strlen_recursion - Returns the length of the string by recursion
 * @s: string
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
