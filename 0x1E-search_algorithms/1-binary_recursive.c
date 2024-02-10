#include "search_algos.h"

/**
 * binary_search_recursive - Searches for a value in a sorted array using binary search recursively
 *
 * @array: Pointer to the first element of the array
 * @left: The left index of the current search range
 * @right: The right index of the current search range
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid, i;

    if (right < left)
        return (-1);

    printf("Searching in array: ");
    for (i = left; i < right; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);

    mid = left + (right - left) / 2;
    if (array[mid] == value)
        return (mid);
    if (array[mid] > value)
        return (binary_search_recursive(array, left, mid - 1, value));
    return (binary_search_recursive(array, mid + 1, right, value));
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (binary_search_recursive(array, 0, size - 1, value));
}
