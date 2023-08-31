#include <stdio.h>
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set (starting from 0).
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	mask = ~mask; /* Invert the mask to set the target bit to 0 */
	*n = *n & mask; /* Use bitwise AND to clear the bit value */

	return (1);
}
