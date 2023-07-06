#include "main.h"

/**
 * clear_bit - Sets value of a bit to 0 in any index
 * @n: Represents unsigned long integer's pointer
 * @index: Index of the bit to be set to 0
 *
 * Return: 1 upon sucess, or -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
