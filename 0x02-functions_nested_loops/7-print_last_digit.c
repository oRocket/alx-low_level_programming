#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @a: integer value
 * Return: Always 0 (success)
 */
int print_last_digit(int a)
{
	int z; /*last digit number definition*/

	z = a % 10;
	if (z < 0)
	{
		z = z * -1;
	}

	_putchar(z + '0');

	return (z);
}
