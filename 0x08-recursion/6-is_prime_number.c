#include "main.h"
/**
 * is_prime_number - Looks if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if  prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	
	for (int i = 2; i * i  <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
