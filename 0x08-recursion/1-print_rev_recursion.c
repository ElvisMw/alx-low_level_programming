#include "main.h"

/**
 *  _print_rev_recursion - function that prints string in reverse.
 * @s: for string s
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
