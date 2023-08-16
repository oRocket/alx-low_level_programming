#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a\n
 * parameter on each element of an array.
 * @size: the size of the array
 * @action: a pointer to the function you need to use.
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
			action(array[j]);
	}
}	
