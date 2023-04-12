#include "main.h"
/**
 * factorial - this is a function to get the factoial of a number.
 * @n: number
 * Return: of type int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
	return (1);
	return (n * factorial(n - 1));
}
