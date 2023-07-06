#include "main.h"

/**
 * get_bit - Returns a bit's value for every index
 * @n: Represents unsigned long integer
 * @index: Represents bit's index
 *
 * Return: value of the bit at index otherwise  -1 upon an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
