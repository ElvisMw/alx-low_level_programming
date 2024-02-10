#include "search_algos.h"

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
    size_t mid, left, right;

    if (array == NULL)
        return (-1);

    for (left = 0, right = size - 1; right >= left;)
    {
        printf("Searching in array: ");
        for (mid = left; mid < right; mid++)
            printf("%d, ", array[mid]);
        printf("%d\n", array[mid]);

        mid = left + (right - left) / 2;
        if (array[mid] == value)
            return (mid);
        if (array[mid] > value)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return (-1);
}
