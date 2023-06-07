/**
 * _puts_recursion - prints a string the na new line.
 * @s: points to string for printing
 * Return: void
 */
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
