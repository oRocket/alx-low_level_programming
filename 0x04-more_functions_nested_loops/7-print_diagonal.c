#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times to print a character
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
