#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @a: integer value
 * Return: Always 0 (success)
 */
int print_last_digit(int a)
{
	if (a < 0)
		a *= -1;

	_putchar('0' + (a % 10));

	return (a % 10);
}
