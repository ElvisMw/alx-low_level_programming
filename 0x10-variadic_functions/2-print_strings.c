#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints stringsthen nenw line
 * @separator: Represents string
 * @n: Represents number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int e_l;
	const char *str;

	va_start(args, n);

	for (e_l = 0; e_l < n; e_l++)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && e_l < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
