#include "3-calc.h"
/**
 * op_add - Sumation of a and b
 * @a: Integer 1
 * @b: Integer 2
 * Return: Sum of both a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Difference Between a and b
 * @a: integer 1
 * @b: integer 2
 * Return: Difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of a and b
 * @a: Represents integer 1
 * @b: Represents integer 2
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of a by b
 * @a: Represets integer 1
 * @b: Represents integer 2
 * Return: Division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns modulus  of a by b
 * @a: integer 1
 * @b: integer 2
 * Return:Remainder after division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
