#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in library.
 * Return: Always 0 (Success)
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /* Right-shift n by 1 */
	}
	/* print the least significant bit of n */
	printf("%lu", n & 1);
}
