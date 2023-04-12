#include "main.h"
/**
 * _pow_recursion - A fucntion to determine power
 * @x: x multiplied by power of y
 * @y: power number
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
