#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Takes an integer pointer 'a' &
 * integer 'size' as input parameters
 * @a: points to he 1st element of the
 * 2-dimentional array
 * @size: dimension of size x size dimension
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

