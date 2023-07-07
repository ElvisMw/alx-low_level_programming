#include "main.h"

/**
 * get_endianness - Checking the endianness of the system
 *
 * Return:If big endian; return 0, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return (*c);
}
