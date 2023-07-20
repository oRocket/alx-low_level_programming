#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 * Return: Always 0 success
 */
void print_square(int size)
{
	int d;
	int e;

	d = 0;

	if (size > 0)
	{
		for (; d < size; d++)
		{
			for (e = 0; e < size; e++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
