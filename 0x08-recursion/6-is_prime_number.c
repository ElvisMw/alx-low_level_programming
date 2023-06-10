#include "main.h"

int letty_prime(int n, int i);

/**
 * is_prime_number - check whether or not int is prime number
 * @n: number to check
 * Return: 1 or 0 if n is prime number or not respectively
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (letty_prime(n, n - 1));
}

/**
 * letty_prime - knows either number is prime via recursion
 * @n: number to check
 * @i: it is the iterator
 * Return: 1 or 0 if n is prime or not respectively
 */
int letty_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (letty_prime(n, i - 1));
}
