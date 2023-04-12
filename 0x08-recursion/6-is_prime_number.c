#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - function to check prime identifier
 * @n: the number to be checked
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if prime numbers
 * @n: the number
 * @i: iterator
 * Return: either 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
