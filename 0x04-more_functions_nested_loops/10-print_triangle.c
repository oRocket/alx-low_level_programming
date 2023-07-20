#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int h;/*height*/
	int w;/*width*/
	int d;/*draw*/

	if (size <= 0)
		_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
			_putchar(' ');

		for (d = 1; d <= h; d++)
			_putchar('#');

		_putchar('\n');
	}
}
