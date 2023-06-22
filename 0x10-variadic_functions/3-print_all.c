#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints arguements
 * @format: String format characters for arguements
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int e_l = 0;
	char *str;

	va_start(args, format);

	while (format && format[e_l])
	{
		switch (format[e_l])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				e_l++;
				continue;
		}

		if (format[e_l + 1])
			printf(", ");

		e_l++;
	}

	va_end(args);

	printf("\n");
}
