#include "main.h"
/**
 * is_prime_number - Identifies if a number is prime
 * @n: Number to check
 * Return: 1 if number is prime or 0 if not
 */
int is_prime_number(int n)
	int i;
{
	if (n <= 1)

		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)

			return (0);
	}
	return (1);
}
