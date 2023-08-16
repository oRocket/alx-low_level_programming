#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 * Return: Index of the first element\n.
 * for which the cmp function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
}
