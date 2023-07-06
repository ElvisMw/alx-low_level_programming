#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * binary_to_uint - For conversion of binary number to unsigned int
 * @b: Represents pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if invalid characters or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int e_m;

	if (b == NULL)
		return (0);

	for (e_m = 0; b[e_m] != '\0'; e_m++)
	{
		if (b[e_m] != '0' && b[e_m] != '1')
			return (0);

		result = result << 1;
		if (b[e_m] == '1')
			result = result | 1;
	}

	return (result);
}
