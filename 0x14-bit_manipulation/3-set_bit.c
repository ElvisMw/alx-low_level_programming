#include "main.h"

/**
 * set_bit - Sets  bit's value to 1 in any index
 * @n: number's pointer
 * @index: Represents Index of the bit to set
 *
 * Return: Upon success, return 1,
 * otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);
	return (1);
}
