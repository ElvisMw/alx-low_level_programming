#include "main.h"
/**
 * _sqrt_recursion - function to computesquare root of a number.
 * @n: number for square root
 * Return: Natural square root if present or -1 if absent
 */
int _sqrt_recursion(int n)
{
	return sqrt_x(n, 1);

/*
 * sqrt_x - function to assist in the calculation of the square rot
 * @n: number to compute its square root
 * @rand: random guess for square root
 *
 * Return: Naturaal square root if present or -1 if absent
 */
int sqrt_x(int n, int rand)
{
	if (n < 0)
		return (-1);
	
	if (rand * rand > n )
		return (-1);
	
	if (rand * rand == n)
		return (rand);
	
	return (sqrt_x(n, rand + 1));
}	
