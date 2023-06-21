#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes assigned function on array elements
 * @array: Points to array
 * @size: Array's size
 * @action: Points to function to execute
 * Return: No return value (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t e_l;

	if (array != NULL && action != NULL)
	{
		for (e_l = 0; e_l < size; e_l++)
		{
			action(array[e_l]);
		}
	}
}
