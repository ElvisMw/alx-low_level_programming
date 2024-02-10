#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted
 * array using jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
    int index, j, l, prev;

    if (array == NULL || size == 0)
        return (-1);

    j = (int)sqrt((double)size);
    l = 0;
    prev = index = 0;

    do {
        printf("Value checked array[%d] = [%d]\n", index, array[index]);

        if (array[index] == value)
            return (index);
        l++;
        prev = index;
        index = l * j;
    } while (index < (int)size && array[index] < value);

    printf("Value found between indexes [%d] and [%d]\n", prev, index);

    for (; prev <= index && prev < (int)size; prev++)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
    }

    return (-1);
}
