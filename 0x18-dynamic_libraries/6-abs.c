#include "main.h"

/**
 * _abs - This checks for absolute value
 *
 * @a: represents parameter to be checked
 *
 *Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
