#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @z: integer value
 * Return: Always 0 (success)
 */
int print_last_digit(int z)
{
	if (z >= 0 && z <= 9)
		return (z);

	else
	{
		z = _abs(z % 10);
	}
		return (z);
}
