#include "main.h"

int letty_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion -get sqrt of a natural number n via recursion
 * letty_sqrt_recursion - Through recursion finds natural square root of number
 * @n: number for square root
 * Return: Natural square root if present or -1 if absent
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (letty_sqrt_recursion(n, 0));
}

/**
 * letty_sqrt_recursion -function finds natural square root of number
 * _sqrt_recursion get square root of a natural n via recursion
 * @n: number to compute its square root
 * @i: Looks for square root
 *
 * Return: Natural square root if present or -1 if absent
 */
int letty_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (letty_sqrt_recursion(n, i + 1));
}
