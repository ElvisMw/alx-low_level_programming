#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - looks for integer in array
 * @array: This is  array to be searched
 * @size: Total elements in the array
 * @cmp: Points to function for  comparision of values
 *
 * Return: the index of element upon success or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int e_l;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (e_l = 0; e_l < size; e_l++)
		{
			if (cmp(array[e_l]) != 0)
				return (e_l);
		}
	}

	return (-1);
}
