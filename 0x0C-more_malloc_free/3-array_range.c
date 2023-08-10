#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an arrag of integers
 * @min: minimun values
 * @max: maximum values
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

