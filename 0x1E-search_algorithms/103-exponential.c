#include "search_algos.h"

/**
 * _binary_search - Searches for a value in
 * a sorted array using binary search
 *
 * @array: Pointer to the first element of the array
 * @left: The left index of the current search range
 * @right: The right index of the current search range
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
    size_t e;

    if (array == NULL)
        return (-1);

    while (right >= left)
    {
        printf("Searching in array: ");
        for (e = left; e < right; e++)
            printf("%d, ", array[e]);
        printf("%d\n", array[e]);

        e = left + (right - left) / 2;
        if (array[e] == value)
            return (e);
        if (array[e] > value)
            right = e - 1;
        else
            left = e + 1;
    }

    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using exponential search
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t e = 0, right;

    if (array == NULL)
        return (-1);

    if (array[0] != value)
    {
        for (e = 1; e < size && array[e] <= value; e *= 2)
            printf("Value checked array[%ld] = [%d]\n", e, array[e]);
    }

    right = e < size ? e : size - 1;
    printf("Value found between indexes [%ld] and [%ld]\n", e / 2, right);
    return (_binary_search(array, e / 2, right, value));
}
