#include "main.h"

int check_print(int, int);
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
 */
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		print(1);
	return (check_prime(n, i + 1));
}
