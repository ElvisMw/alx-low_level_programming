#include "main.h"

int letty_check(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - looks whether string is a palindrome
 * @s: string for reverse
 * Return: 1 or 0 if it is or not respectively
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (letty_check(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns string length
 * @s:  calculates string length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
/**
 * letty_check - checks if string is palindrome
 * @s: string to look
 * @i: iterator
 * @len: string's length
 * Return: 1 or 0 if palindrome or not respectively
 */
int letty_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (letty_check(s, i + 1, len - 1));
}
