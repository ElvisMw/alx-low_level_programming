#include "main.h"
/**
 * is_prime_number - Looks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if  prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}
/**
 * is_prime - Helper function to see if a number is prime recursively
 * @n: The number in study
 * @divisor: To check for divisibility
 * Return: 1 if the number is prime or 0 if not
 */
int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime(n, divisor + 1));
}
