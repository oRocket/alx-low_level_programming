#include "main.h"
#include <stdio.h>
/**
 * main - prints the n times table
 * print_times_table - prints the n times table
 * @n: integer under review
 * Return: Always 0 success
 */
void print_times_table(int n)
{
	int r; /*defining the variable r which is the row*/
	int c; /*column variable definition*/
	int p; /*product variable definition*/

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				p = (r * c);
				if (c == 0)
					_putchar('0' + p);
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(',');
					if (p <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + p);
					}
					else if (p > 9 && p < 100)
					{
						_putchar(' ');
						_putchar('0' + (p / 10));
						_putchar('0' + (p % 10));
					}
					else if (p >= 100)
					{
						_putchar('0' + (p / 100));
						_putchar('0' + ((p / 10) % 10));
						_putchar('0' + (p % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}

