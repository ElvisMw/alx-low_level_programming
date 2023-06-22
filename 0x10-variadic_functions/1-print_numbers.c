#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers
 * @separator: Represents string to print
 * @n: Represents integers for function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int e_l;

	va_start(args, n);

	for (e_l = 0; e_l < n; e_l++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && e_l < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
