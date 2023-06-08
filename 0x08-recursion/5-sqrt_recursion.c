#include "main.h"
/**
 * _sqrt_recursion - function to compute square root of a number.
 * @n: number for square root
 * Return: Natural square root if present or -1 if absent
 */
int _sqrt_recursion(int n)
{
	return letty_sqrt_recursion(n, 1);
}

/*
 * letty_sqrt_recursion - function to assist in the calculation of the square rot
 * @n: number to compute its square root
 * @i: Looks for square root
 *
 * Return: Naturaal square root if present or -1 if absent
 */
int letty_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return letty_sqrt_recursion(n, i + 1);
}
