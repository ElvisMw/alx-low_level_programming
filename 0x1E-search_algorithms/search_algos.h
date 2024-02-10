#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>

/* Function prototypes with comments */
int linear_search(int *array, size_t size, int value);
/*
 * Linear search: Iterate through the array to find the target value.
 * Parameters:
 * - array: Pointer to the array to be searched
 * - size: Number of elements in the array
 * - value: Target value to be found
 * Returns:
 * - Index of the target value if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value);
/*
 * Binary search: Divide and conquer approach to find the target value.
 * Parameters:
 * - array: Pointer to the sorted array to be searched
 * - size: Number of elements in the array
 * - value: Target value to be found
 * Returns:
 * - Index of the target value if found, otherwise -1
 */

int jump_search(int *array, size_t size, int value);
/*
 * Jump search: Jump quickly narrow down the search.
 * Parameters:
 * - array: Pointer to the sorted array to be searched
 * - size: Number of elements in the array
 * - value: Target value to be found
 * Returns:
 * - Index of the target value if found, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value);
/*
 * Interpolation search: Estimate position of target value based on its value
 * Parameters:
 * - array: Pointer to the sorted array to be searched
 * - size: Number of elements in the array
 * - value: Target value to be found
 * Returns:
 * - Index of the target value if found, otherwise -1
 */

#endif /* SEARCH_ALGOS_H */
