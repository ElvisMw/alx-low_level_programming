#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Gives sum of parameters
 * @n: total parater number
 * Return: Sum upon success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int e_l;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (e_l = 0; e_l < n; e_l++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
