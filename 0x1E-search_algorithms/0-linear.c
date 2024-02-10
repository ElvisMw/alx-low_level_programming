#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
    int e;

    if (array == NULL)
        return (-1);

    for (e = 0; e < (int)size; e++)
    {
        printf("Value checked array[%u] = [%d]\n", e, array[e]);
        if (value == array[e])
            return (e);
    }
    return (-1);
}
