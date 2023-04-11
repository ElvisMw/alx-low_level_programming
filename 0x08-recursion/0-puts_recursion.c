#include "main.h"
/**
 * _puts_recursion -function that functions like the standart library puts().
 * @s: This serves as a starting point for the function.
 * to access and print the characters of the input string.
 * Return: Always 0 upon success.
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n);
}
